#include "drawwidget.h"
#include "particle.h"
#include <synchapi.h>
#include <QDebug>
#include <cstdlib>
#include <ctime>
#include <random>

DrawWidget::DrawWidget(QWidget *parent) : QWidget(parent)
{
    srand(time(NULL));
    for(int i = 0; i < 50; i++) {
        qDebug()<<rand()<<endl;
        double px = rand()%(width()/2) + width()/4;
        double py =  rand()%(height()/2) + height()/4;
        particleList.append(new Particle(px,py,1.0*(rand()%30)/10+1,1.0*(rand()%30)/10+1));
    }
}


void DrawWidget::paintEvent(QPaintEvent * event){

    QPainter painter(this);
    painter.setPen(Qt::black);
    int w = width();
    int h = height();
    painter.fillRect(0,0,w,h,Qt::white);
    painter.drawRect(0,0,w-1,h-1);
    for(QVector<Particle*>::iterator p = particleList.begin(); p < particleList.end(); p++){
        (*p)->draw(&painter);
        (*p)->move(1,0,0,w-1,h-1);
    }
    Sleep(20);
    update();
}

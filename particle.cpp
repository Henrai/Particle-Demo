#include "particle.h"
#include <QDebug>

Particle::Particle(double px, double py, double vx, double vy)
{
       positionX = px;
       positionY = py;
       speedX = vx;
       speedY = vy;
       qDebug()<<px<<" "<<py<<" "<<vx<<" "<<vy<<endl;
       radius = 5;
}

void Particle::move(int dt, int x, int y, int width, int height)
{
    if(positionX + speedX*dt < x + radius || positionX + speedX*dt > width - radius ) speedX = -speedX;
    if(positionY + speedY*dt < y + radius || positionY + speedY*dt > height - radius ) speedY = -speedY;
    positionX += speedX;
    positionY += speedY;
}

void Particle::draw(QPainter *painter)
{
    painter->setBrush(Qt::black);
    painter->drawEllipse(getX(),getY(),getR(),getR());
}

int Particle::getX()
{
    return positionX;
}

int Particle::getY()
{
    return positionY;
}

int Particle::getR()
{
    return radius;
}


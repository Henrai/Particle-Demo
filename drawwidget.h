#ifndef DRAWWIDGT_H
#define DRAWWIDGT_H

#include <QWidget>
#include <QPainter>
#include "particle.h"
class DrawWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DrawWidget(QWidget *parent = nullptr);
    QVector<Particle*> particleList;
public slots:
    void paintEvent(QPaintEvent * event);
};

#endif // DRAWWIDGT_H

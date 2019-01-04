#ifndef PARTICLE_H
#define PARTICLE_H

#include <QPainter>
#include <QPaintDevice>

class Particle {
public:
    Particle(double px = 100, double py =100, double vx = 1, double vy = 1);
    void move(int dx, int x, int y, int width, int height);
    void draw(QPainter *painter);
    int getX();
    int getY();
    int getR();
private:
    double positionX, positionY;
    double speedX, speedY;
    int radius;
    int boundaryX,boundaryY;
    int boundaryWidth, boundaryHeight;
};

#endif // PARTICLE_H

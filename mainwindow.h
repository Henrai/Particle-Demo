#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void generateParticles();
    void clearScreen();
    void run();
    void stop();
    void updateParticleCount(int value);
private slots:
    void on_generateButton_clicked();
    void on_particlesCount_actionTriggered(int action);
    void on_clearButton_clicked();
    void on_runButton_clicked();
    void on_stopButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

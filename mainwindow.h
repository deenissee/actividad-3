#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<iostream>

class Neurona
{
public:
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;

    Neurona *sig;
    Neurona(int, float, int, int, int, int, int, Neurona*);
    Neurona():id(1),  voltaje(122),  posicion_x(123),  posicion_y(321),  red(1),  green(2),  blue(3){};
    void print()const
    {
        std::cout<<"Neurona\n"<<"ID:"<<id<<"\nVoltaje:"<<voltaje<<"\nPosicion X:"<<posicion_x<<"\nPosicion Y:"<<posicion_y<<
        "\nRed:"<<red<<"\nGreen:"<<green<<"\nBlue:"<<blue<<std::endl;
    }
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Administrar
{
private:
    Neurona *h;
public:
    Administrar()
    {
        h=nullptr;
    }
    void agregarInicio();
    void agregarFinal();
    void mostrar();
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_verticalSlider_valueChanged(int value);

    void on_verticalSlider_2_valueChanged(int value);

    void on_verticalSlider_3_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    Neurona n;
};
#endif // MAINWINDOW_H

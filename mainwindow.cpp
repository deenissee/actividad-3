#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
Neurona::Neurona(int id, float voltaje, int posicion_x, int posicion_y, int red, int green, int blue, Neurona *sig)
{
    this->id=id;
    this->voltaje=voltaje;
    this->posicion_x=posicion_x;
    this->posicion_y=posicion_y;
    this->red=red;
    this->green=green;
    this->blue=blue;
    this->sig=sig;
}

void MainWindow::on_pushButton_clicked()
{
    n.print();
}

void Administrar::agregarInicio()
{
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;
    Neurona *tmp=new Neurona();
    if(!h)
    {
        h=tmp;
    }
    else
    {
        tmp->sig=h;
        h=tmp;
    }
}
void Administrar::agregarFinal()
{
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;
    Neurona *tmp=new Neurona();
    if(!h)
    {
        h=tmp;
    }
    else
    {
        Neurona *aux=h;
        while(aux->sig!=nullptr)
        {
            aux=aux->sig;
        }
        aux->sig=tmp;
    }
}
void Administrar::mostrar()
{
    Neurona *aux=h;
    while(aux!=nullptr)
    {
        std::cout<<"ID:"<<aux->id<<std::endl;
        std::cout<<"Voltaje:"<<aux->voltaje<<std::endl;
        std::cout<<"Posicion X:"<<aux->posicion_x<<std::endl;
        std::cout<<"Posicion Y:"<<aux->posicion_y<<std::endl;
        std::cout<<"Red:"<<aux->red<<std::endl;
        std::cout<<"Green:"<<aux->green<<std::endl;
        std::cout<<"Blue:"<<aux->blue<<std::endl;
        aux=aux->sig;
    }
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{

}


void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{

}


void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{

}


void MainWindow::on_verticalSlider_valueChanged(int value)
{

}


void MainWindow::on_verticalSlider_2_valueChanged(int value)
{

}


void MainWindow::on_verticalSlider_3_valueChanged(int value)
{

}


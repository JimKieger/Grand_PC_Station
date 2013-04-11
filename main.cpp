#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[]){

    //Start window
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


//Waiting for exit
    return a.exec();
}



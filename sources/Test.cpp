﻿
#include <iostream>
#include "CommandLineInterface.h"
#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

using namespace std;

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

    QTranslator myappTranslator;
    myappTranslator.load("C:/Qt/projects/CHAT_PRO/build/Desktop-Debug/translations/my_ru.qm");
    a.installTranslator(&myappTranslator);

    QTranslator qtTranslator;
    //qtTranslator.load("translations/qt_ru.qm");
    qtTranslator.load("C:/Qt/projects/CHAT_PRO/build/Desktop-Debug/translations/qt_ru.qm");
    a.installTranslator(&qtTranslator);


   auto w = MainWindow::createClient();
   if(w)
    w->show();
   else
       return 0;

  return a.exec();
}



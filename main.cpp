/*************************************************************************
    > File Name: main.cpp
    > Author: zxf
    > Mail: zhengxiaofeng333@163.com 
    > Created Time: 2017年01月20日 星期五 17时29分48秒
 ************************************************************************/

#include <iostream>
#include <unistd.h>
using namespace std;

#include <QApplication>
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow mw;
    mw.resize(1024, 768);
    mw.show();

    app.exec();
}

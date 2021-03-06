/*************************************************************************
    > File Name: /home/hero/project/SurfaceIR/mainwindow.cpp
    > Author: zxf
    > Mail: zhengxiaofeng333@163.com 
    > Created Time: 2017年01月20日 星期五 17时31分02秒
 ************************************************************************/

#include <iostream>
#include <unistd.h>
using namespace std;

#include <mainwindow.h>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent),
    change(false)
{
    mainLayout = new QGridLayout;
    
    sfLeftTop = new ShowFrame;
    sfLeftBottom = new ShowFrame;
    sfRightTop = new ShowFrame;
    sfRightBottom = new ShowFrame;

    sfLeftTop->setMinimumSize(width() / 2, height() / 2);
    sfLeftBottom->setMinimumSize(width() / 2, height() / 2);
    sfRightTop->setMinimumSize(width() / 2, height() / 2);
    sfRightBottom->setMinimumSize(width() / 2, height() / 2);

    mainLayout->addWidget(sfLeftTop, 0, 0, Qt::AlignCenter);
    mainLayout->addWidget(sfRightTop, 0, 1, Qt::AlignCenter);
    mainLayout->addWidget(sfLeftBottom, 1, 0, Qt::AlignCenter);
    mainLayout->addWidget(sfRightBottom, 1, 1, Qt::AlignCenter);


    setLayout(mainLayout);

    setWindowFlags(Qt::FramelessWindowHint);
}

void MainWindow::resizeEvent(QResizeEvent *e)
{
    QWidget::resizeEvent(e);
    if (!change){
        sfLeftTop->setMinimumSize(width() / 2, height() / 2);
        sfLeftBottom->setMinimumSize(width() / 2, height() / 2);
        sfRightTop->setMinimumSize(width() / 2, height() / 2);
        sfRightBottom->setMinimumSize(width() / 2, height() / 2);
        change = true;
    }
    else 
        change = false;
    
}

void MainWindow::on_sfLeftTop_clicked()
{
}

void MainWindow::on_sfLeftBottom_clicked()
{
}

void MainWindow::on_sfRightTop_clicked()
{
}

void MainWindow::on_sfRightBottom_clicked()
{
}

#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QBitmap>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);

    //QPixmap 图片背景透明
    p.drawPixmap(0,0,QPixmap("../testSource/2.png"));
    //QBitmap 图片背景透明
    p.drawPixmap(400,0,QBitmap("../testSource/2.png"));


    //QPixmap 图片背景白色
    QPixmap pixmap;
    pixmap.load("../testSource/2.png");
    p.drawPixmap(400,0,pixmap);

    //QBitmap 图片背景白色
    QBitmap bitmap;
    bitmap.load("../testSource/2.png");
    p.drawPixmap(0,400,pixmap);

}

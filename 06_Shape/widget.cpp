#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QMouseEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //去窗口边框
    setWindowFlags(Qt::FramelessWindowHint |windowFlags());

    //把窗口背景设置为透明
    setAttribute(Qt::WA_TranslucentBackground);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.drawPixmap(0,0,QPixmap("../testSource/img.jpg"));

}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->button()==Qt::RightButton)
    {
        //如果是左键
        close();
    }
    else if(event->button()==Qt::LeftButton)
    {
        //求坐标差值
        //当前点击鼠标-窗口左上角坐标
        p=event->globalPos() - this->frameGeometry().topLeft();

    }
}
void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-p);
    }

}

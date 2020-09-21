#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QBrush>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //绘图设备400*300
    QPixmap pixmap(400,300);

    QPainter p(&pixmap);

    //背景白色填充
    //p.fillRect(0,0,400,300,QBrush(Qt::white));
    pixmap.fill(Qt::white);

    p.drawPixmap(0,0,80,80,QPixmap("../testSource/2.png"));

    //保存图片
    pixmap.save("../pixmap.jpg");
}

Widget::~Widget()
{
    delete ui;
}

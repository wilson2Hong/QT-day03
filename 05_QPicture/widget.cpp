#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPicture>
#include<QImage>
#include<QPixmap>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPicture picture;
    QPainter p;
    p.drawPixmap(0,0,80,80,QPixmap("../testSource/2.png"));
    p.drawLine(50,50,150,50);

    p.end();

    //保存的是二进制文件
    picture.save("../picture.png");

}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *event)
{
  #if 0
    QPicture pic;
    pic.load("../picture.png");//加载文件
    QPainter p(this);
    p.drawPicture(0,0,pic);
  #endif
    QPainter p(this);
    QPixmap pixmap;
    pixmap.load("../testSource/2.png");

    //QPixmap->QImage
    QImage tempImage = pixmap.toImage();
    p.drawImage(0,0,tempImage);

    QImage image;

    image.load("../testSource/2.png");

    //QImage->QPixmap
    QPixmap tempPixmap = QPixmap::fromImage(image);
    p.drawPixmap(500,0,tempPixmap);

}

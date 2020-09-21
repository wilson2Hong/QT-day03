#include "chesswidget.h"
#include "ui_chesswidget.h"
#include<QPaintEvent>
#include<QPainter>
#include<QDebug>
ChessWidget::ChessWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChessWidget)
{
    ui->setupUi(this);

    chessX = -1;
    chessY = -1;
}

ChessWidget::~ChessWidget()
{
    delete ui;
}

void ChessWidget::paintEvent(QPaintEvent *)
{
    gridW = width()/10;//窗口宽度分10份
    gridH = height()/10;//窗口高度分10分

    //棋盘起点坐标
    startX = gridW;
    startY = gridH;

    QPainter p(this);//创建画家，指定窗口为绘图设备

    //画背景图
    p.drawPixmap(rect(),QPixmap(":/new/prefix1/testSource/1.jpg"));

    //设置画笔
    QPen pen;
    pen.setWidth(4);//线宽
    p.setPen(pen);

    //取中间8份画棋盘
    for(int i = 0;i <= 8;i++)
    {
        //横线
        p.drawLine(startX,startY+i*gridH,startX+8*gridW,startY+i*gridH);

        //竖线
        p.drawLine(startX+i*gridW,startY,startX+i*gridW,startY+8*gridH);
    }
    //画棋子
    if(chessX !=-1 &&chessY !=-1)
    {
        p.drawPixmap(startX+chessX*gridW,startY+chessY*gridH,
                    gridW,gridH,
                     QPixmap(":/new/prefix1/testSource/chess.jpg"));
    }
}

void ChessWidget::mousePressEvent(QMouseEvent *e)
{
    //获取点击的坐标
    int x = e->x();
    int y = e->y();

    //要保证点击点在棋盘范围内
    if(x >= startX && x <=startX+8*gridW && y >= startY && y <= startX+8*gridH)
    {
        //棋盘的位置换换为坐标下标值
        //类似于a[i][j]的i和j
        chessX = (x-startX)/gridW;
        chessY = (y-startY)/gridH;

        qDebug()<<chessX<<chessY;

        //更新窗口，间接调用painterEvent();
        update();

    }
}























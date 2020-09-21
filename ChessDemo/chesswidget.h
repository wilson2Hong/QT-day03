#ifndef CHESSWIDGET_H
#define CHESSWIDGET_H

#include <QWidget>

namespace Ui {
class ChessWidget;
}

class ChessWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChessWidget(QWidget *parent = 0);
    ~ChessWidget();
protected:
    //重写绘图事件
    void paintEvent(QPaintEvent *);

    //重写鼠标事件
    void mousePressEvent(QMouseEvent *e);

private:
    Ui::ChessWidget *ui;

    int gridW;//棋盘水平方向一个格子的宽度
    int gridH;//棋盘水平方向一个格子的高度
    int startX;//棋盘起点x坐标
    int startY;//棋盘起点y坐标

    int chessX,chessY;
};

#endif // CHESSWIDGET_H

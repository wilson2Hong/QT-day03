/********************************************************************************
** Form generated from reading UI file 'chesswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSWIDGET_H
#define UI_CHESSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessWidget
{
public:

    void setupUi(QWidget *ChessWidget)
    {
        if (ChessWidget->objectName().isEmpty())
            ChessWidget->setObjectName(QStringLiteral("ChessWidget"));
        ChessWidget->resize(400, 300);

        retranslateUi(ChessWidget);

        QMetaObject::connectSlotsByName(ChessWidget);
    } // setupUi

    void retranslateUi(QWidget *ChessWidget)
    {
        ChessWidget->setWindowTitle(QApplication::translate("ChessWidget", "ChessWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class ChessWidget: public Ui_ChessWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonRead;
    QPushButton *buttonWrite;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        buttonRead = new QPushButton(Widget);
        buttonRead->setObjectName(QStringLiteral("buttonRead"));

        gridLayout->addWidget(buttonRead, 0, 1, 1, 1);

        buttonWrite = new QPushButton(Widget);
        buttonWrite->setObjectName(QStringLiteral("buttonWrite"));

        gridLayout->addWidget(buttonWrite, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        buttonRead->setText(QApplication::translate("Widget", "readFile", 0));
        buttonWrite->setText(QApplication::translate("Widget", "writeFile", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

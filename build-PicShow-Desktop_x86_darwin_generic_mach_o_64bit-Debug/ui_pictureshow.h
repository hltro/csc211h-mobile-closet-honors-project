/********************************************************************************
** Form generated from reading UI file 'pictureshow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURESHOW_H
#define UI_PICTURESHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureShow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QLabel *labDesc;
    QLabel *labPic;

    void setupUi(QWidget *PictureShow)
    {
        if (PictureShow->objectName().isEmpty())
            PictureShow->setObjectName(QString::fromUtf8("PictureShow"));
        PictureShow->resize(500, 459);
        verticalLayout = new QVBoxLayout(PictureShow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        widget = new QWidget(PictureShow);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(185, 0));
        listWidget->setMaximumSize(QSize(185, 16777215));

        gridLayout->addWidget(listWidget, 0, 0, 2, 1);

        labDesc = new QLabel(widget);
        labDesc->setObjectName(QString::fromUtf8("labDesc"));

        gridLayout->addWidget(labDesc, 0, 1, 1, 1);

        labPic = new QLabel(widget);
        labPic->setObjectName(QString::fromUtf8("labPic"));
        labPic->setMaximumSize(QSize(650, 570));

        gridLayout->addWidget(labPic, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 5);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 4);

        verticalLayout->addWidget(widget);


        retranslateUi(PictureShow);

        QMetaObject::connectSlotsByName(PictureShow);
    } // setupUi

    void retranslateUi(QWidget *PictureShow)
    {
        PictureShow->setWindowTitle(QCoreApplication::translate("PictureShow", "Form", nullptr));
        labDesc->setText(QString());
        labPic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PictureShow: public Ui_PictureShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURESHOW_H

/********************************************************************************
** Form generated from reading UI file 'myqwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQWIDGET_H
#define UI_MYQWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myQWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widgetButtons;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer;
    QPushButton *testBtm;
    QTextEdit *textEdit;
    QWidget *widgetBottom;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelPosition;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *myQWidget)
    {
        if (myQWidget->objectName().isEmpty())
            myQWidget->setObjectName(QString::fromUtf8("myQWidget"));
        myQWidget->resize(919, 626);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/note.png"), QSize(), QIcon::Normal, QIcon::Off);
        myQWidget->setWindowIcon(icon);
        layoutWidget = new QWidget(myQWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 60, 602, 294));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetButtons = new QWidget(layoutWidget);
        widgetButtons->setObjectName(QString::fromUtf8("widgetButtons"));
        widgetButtons->setMinimumSize(QSize(0, 50));
        widgetButtons->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(169, 169, 169);\n"
""));
        layoutWidget1 = new QWidget(widgetButtons);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 571, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnOpen = new QPushButton(layoutWidget1);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setMinimumSize(QSize(30, 30));
        btnOpen->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"    border-image: url(:/new/prefix1/o1.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border-image: url(:/new/prefix1/o2.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border-image: url(:/new/prefix1/o3.png);\n"
"}\n"
""));

        horizontalLayout->addWidget(btnOpen);

        btnSave = new QPushButton(layoutWidget1);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(30, 30));
        btnSave->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"    border-image: url(:/new/prefix1/s1.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border-image: url(:/new/prefix1/s2.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border-image: url(:/new/prefix1/s3.png);\n"
"}\n"
""));
        btnSave->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(btnSave);

        btnClose = new QPushButton(layoutWidget1);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setMinimumSize(QSize(30, 30));
        btnClose->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"    border-image: url(:/new/prefix1/c1.png);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border-image: url(:/new/prefix1/c2.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border-image: url(:/new/prefix1/c3.png);\n"
"}\n"
""));

        horizontalLayout->addWidget(btnClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widgetButtons);

        testBtm = new QPushButton(layoutWidget);
        testBtm->setObjectName(QString::fromUtf8("testBtm"));

        verticalLayout->addWidget(testBtm);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(50, 50));
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(169, 169, 169);\n"
""));

        verticalLayout->addWidget(textEdit);

        widgetBottom = new QWidget(layoutWidget);
        widgetBottom->setObjectName(QString::fromUtf8("widgetBottom"));
        widgetBottom->setMinimumSize(QSize(600, 50));
        widgetBottom->setLayoutDirection(Qt::LeftToRight);
        widgetBottom->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(169, 169, 169);\n"
""));
        horizontalLayout_2 = new QHBoxLayout(widgetBottom);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(450, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelPosition = new QLabel(widgetBottom);
        labelPosition->setObjectName(QString::fromUtf8("labelPosition"));

        horizontalLayout_2->addWidget(labelPosition);

        comboBox = new QComboBox(widgetBottom);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widgetBottom);


        retranslateUi(myQWidget);

        QMetaObject::connectSlotsByName(myQWidget);
    } // setupUi

    void retranslateUi(QWidget *myQWidget)
    {
        myQWidget->setWindowTitle(QCoreApplication::translate("myQWidget", "hebing\350\256\260\344\272\213\346\234\254", nullptr));
        btnOpen->setText(QString());
        btnSave->setText(QString());
        btnClose->setText(QString());
        testBtm->setText(QCoreApplication::translate("myQWidget", "PushButton", nullptr));
        labelPosition->setText(QCoreApplication::translate("myQWidget", "\347\254\254\344\270\200\350\241\214\347\254\254\344\270\200\345\210\227", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("myQWidget", "UTF-8", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("myQWidget", "UTF-16", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("myQWidget", "ISO 8859-1", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("myQWidget", "GBK", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("myQWidget", "ANSI", nullptr));

    } // retranslateUi

};

namespace Ui {
    class myQWidget: public Ui_myQWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_File
{
public:
    QPushButton *ButtonRead;
    QPushButton *ButtonWrite;
    QPushButton *QTextStreamRead;
    QPushButton *QTextStreamWrite;
    QPushButton *QFileDialog;
    QPushButton *QFileDialog2;

    void setupUi(QWidget *File)
    {
        if (File->objectName().isEmpty())
            File->setObjectName(QString::fromUtf8("File"));
        File->resize(800, 600);
        ButtonRead = new QPushButton(File);
        ButtonRead->setObjectName(QString::fromUtf8("ButtonRead"));
        ButtonRead->setGeometry(QRect(110, 80, 80, 18));
        ButtonWrite = new QPushButton(File);
        ButtonWrite->setObjectName(QString::fromUtf8("ButtonWrite"));
        ButtonWrite->setGeometry(QRect(250, 80, 80, 18));
        QTextStreamRead = new QPushButton(File);
        QTextStreamRead->setObjectName(QString::fromUtf8("QTextStreamRead"));
        QTextStreamRead->setGeometry(QRect(110, 150, 80, 18));
        QTextStreamWrite = new QPushButton(File);
        QTextStreamWrite->setObjectName(QString::fromUtf8("QTextStreamWrite"));
        QTextStreamWrite->setGeometry(QRect(250, 150, 80, 18));
        QFileDialog = new QPushButton(File);
        QFileDialog->setObjectName(QString::fromUtf8("QFileDialog"));
        QFileDialog->setGeometry(QRect(110, 220, 80, 18));
        QFileDialog2 = new QPushButton(File);
        QFileDialog2->setObjectName(QString::fromUtf8("QFileDialog2"));
        QFileDialog2->setGeometry(QRect(110, 290, 80, 18));

        retranslateUi(File);

        QMetaObject::connectSlotsByName(File);
    } // setupUi

    void retranslateUi(QWidget *File)
    {
        File->setWindowTitle(QCoreApplication::translate("File", "File", nullptr));
        ButtonRead->setText(QCoreApplication::translate("File", "read", nullptr));
        ButtonWrite->setText(QCoreApplication::translate("File", "write", nullptr));
        QTextStreamRead->setText(QCoreApplication::translate("File", "QTextStreamRead", nullptr));
        QTextStreamWrite->setText(QCoreApplication::translate("File", "QTextStreamWrite", nullptr));
        QFileDialog->setText(QCoreApplication::translate("File", "QFileDialog", nullptr));
        QFileDialog2->setText(QCoreApplication::translate("File", "\345\210\206\346\255\245\351\252\244\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class File: public Ui_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,&Widget::customSignal,this, &Widget::on_someButton_myclicked);
    connect(this,&Widget::customSignalPar,this, &Widget::on_someButton_myclickedpar);
    //睡眠10秒
    QTimer::singleShot(10000, this, [=]() {
        emit customSignal(); //发射信号
    });
    QTimer::singleShot(10000, this, [=]() {
        emit customSignalPar(10); //发射信号
    });

}

Widget::~Widget()
{
    delete ui;
}

//实现槽函数
void Widget::on_someButton_myclicked()
{
    //槽函数的实现
    qDebug() << "Custom signal received!";
}

void Widget::on_someButton_myclickedpar(int value)
{
qDebug() << "Custom signalpar received with value:" << value;
}  //槽函数的实现


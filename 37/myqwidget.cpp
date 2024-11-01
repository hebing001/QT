#include "myqwidget.h"
#include "ui_myqwidget.h"
#include <QFileDialog>
#include <iostream>

myQWidget::myQWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myQWidget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);
    //在信号与槽中连接按钮
    connect(ui->btnSave, &QPushButton::clicked, this, &myQWidget::on_btnSave_myclicked);
    //lamda表达式
    connect(ui->testBtm,&QPushButton::clicked, [=]() {
        qDebug() << "有信号到了！"; //输出一段话
    });

    connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &myQWidget::onCurrentIndexChanged);

}

myQWidget::~myQWidget()
{
    delete ui;
}

void myQWidget::on_btnOpen_clicked()

{


    //清空控键
    ui->textEdit->clear();
    //打开文本选择
    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "E:/ALearnNotes/NewVersionNote/QT5/src/45/data", tr("Text Files (*.txt);;All Files (*)"));
    //打印获得的文件名
    qDebug() << "Selected file:" << filename;
    //打开文件
    file.setFileName(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading";
        return;
    }

    QTextStream in(&file);
    //判断编码格式，设置对应编码

    QString str = ui->comboBox->currentText();

    //转换成char *
    const char *ch = str.toStdString().c_str();



    in.setCodec(ch);

    QDebug deb = qDebug();
    deb << ch;

    QString content = in.readAll(); // 读取所有内容
    // qDebug() << content; // 输出所有内容


    ui->textEdit->setText(content);




    this->setWindowTitle(filename+"hebing记事本---");




}

void myQWidget::on_btnSave_myclicked()
{
    std::cout << "Save button clicked!" << std::endl; //输出一段话
}


void myQWidget::on_btnSave_clicked()
{
    //保存文件 选择新的文件
    QString filename = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                    "E:/ALearnNotes/NewVersionNote/QT5/src/45/data",
                                                    tr("Text Files (*.txt);;All Files (*)"));
    //打印获得的文件名
    qDebug() << "Selected file:" << filename;
    //打开文件

    this->file.setFileName(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
        qDebug() << "Failed to open file for writing";
        return;
    }
    QTextStream out(&file);
    //设置编码格式
    out.setCodec("UTF-8");
    out << ui->textEdit->toPlainText(); //写入内容
    QString str = ui->textEdit->toPlainText();

    QDebug deb = qDebug();
    deb << str;

    this->setWindowTitle(filename+"hebing记事本---");


}


void myQWidget::on_btnClose_clicked()
{
    //关闭文件
    //判断是否被打开
    if (file.isOpen()) {
        file.close();
        ui->textEdit->clear();
        this->setWindowTitle("hebing记事本");
    }

}



void myQWidget::onCurrentIndexChanged(int index)
{


    if (file.isOpen()) {
        ui->textEdit->clear();
        // 读取文件
        QTextStream in(&file);
        //判断编码格式，设置对应编码
        QString str = ui->comboBox->currentText();

        //移动光标到文件头
        file.seek(0);

        in.setCodec(str.toStdString().c_str());

        QString content = in.readAll(); // 读取所有内容

        ui->textEdit->setText(content);


        qDebug() << "进入了函数onCurrentIndexChanged" ;



    }



}


void myQWidget::on_textEdit_cursorPositionChanged()
{

    //输出光标的行号
    //输出光标的列号
    ui->labelPosition->setText(QString("当前行号：%1  当前列号：%2").arg(ui->textEdit->textCursor().blockNumber()+1)
                                                                 .arg(ui->textEdit->textCursor().columnNumber()+1));

}


void myQWidget::on_myQWidget_destroyed()
{

}


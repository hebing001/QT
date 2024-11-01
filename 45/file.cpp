#include "file.h"
#include "ui_file.h"

File::File(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::File)
{
    ui->setupUi(this);
}

File::~File()
{
    delete ui;
}

void File::on_ButtonRead_clicked()
{
    //打开文件
    // QFile file("E:\ALearnNotes\NewVersionNote\QT5\src\45\data\test.txt");
    QFile file("E:/ALearnNotes/NewVersionNote/QT5/src/45/data/test.txt");//相对路径
    //读取文件
    file.open(QIODevice::ReadOnly|QIODevice::Text); //以只读方式打开文件
    char content[100];
    file.read(content ,100);

    //输出文件内容
    qDebug() << content;  //输出文件内容
    file.close(); //关闭文件
}


void File::on_ButtonWrite_clicked()
{
    QFile file("E:/ALearnNotes/NewVersionNote/QT5/src/45/data/test.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text); //以只写方式打开文件
    file.write("Hello, World! 我是小Σ"); //写入内容

    file.close(); //关闭文件

}


void File::on_QTextStreamRead_clicked()
{

    QFile file("E:/ALearnNotes/NewVersionNote/QT5/src/45/data/test.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading";
        return;
    }

    QTextStream in(&file);
    //设置编码格式
    in.setCodec("UTF-8");
    QString line;
    while (!in.atEnd()) {
        line = in.readLine();
        qDebug() << line; // 输出每一行
    }

    file.close();

}


void File::on_pushButton_2_clicked()
{
    QFile file("E:/ALearnNotes/NewVersionNote/QT5/src/45/data/test.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading";
        return;
    }

    QTextStream in(&file);
    //设置编码格式
    in.setCodec("UTF-8");
    QString content = in.readAll(); // 读取所有内容
    qDebug() << content; // 输出所有内容

    file.close();
}


void File::on_QTextStreamWrite_clicked()
{
    //写入文件
    QFile file("E:/ALearnNotes/NewVersionNote/QT5/src/45/data/test.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
        qDebug() << "Failed to open file for writing";
        return;
    }
    QTextStream out(&file);
    //设置编码格式
    out.setCodec("UTF-8");
    out << "Hello, World! 我手" ; //写入内容
    out<<"endl\n "; //换行

    file.close(); //关闭文件



}




void File::on_QFileDialog_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "E:/ALearnNotes/NewVersionNote/QT5/src/45/data", tr("Text Files (*.txt);;All Files (*)"));
    //打印获得的文件名
    qDebug() << "Selected file:" << filename;

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for reading";
        return;
    }

    QTextStream in(&file);
    //设置编码格式
    in.setCodec("UTF-8");
    QString content = in.readAll(); // 读取所有内容
    qDebug() << content; // 输出所有内容

    file.close();


}


void File::on_QFileDialog2_clicked()
{
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::ExistingFiles);
    // 还可以设置其他参数，例如文件过滤器、窗口标题等
    dialog.setNameFilter("Images (*.png *.jpg *.bmp);;All Files (*)");
    dialog.setWindowTitle("Select one or more files");
    // 显示对话框并获取用户选择的文件
    if (dialog.exec() == QDialog::Accepted) {
        QStringList selectedFiles = dialog.selectedFiles();
        // 处理用户选择的文件
    }

}


#ifndef FILE_H
#define FILE_H

#include <QWidget>
#include <QFile> // Include QFile for file operations
#include <QDebug> // Include QDebug for debugging output
#include <QTextStream> // Include QTextStream for reading/writing text
#include <QFileDialog> // Include QFileDialog for file dialog

QT_BEGIN_NAMESPACE
namespace Ui {
class File;
}
QT_END_NAMESPACE

class File : public QWidget
{
    Q_OBJECT

public:
    File(QWidget *parent = nullptr);
    ~File();

private slots:
    void on_ButtonRead_clicked();

    void on_ButtonWrite_clicked();

    void on_QTextStreamRead_clicked();

    void on_pushButton_2_clicked();

    void on_QTextStreamWrite_clicked();

    void on_QFileDialog_clicked();

    void on_QFileDialog2_clicked();

private:
    Ui::File *ui;
};
#endif // FILE_H

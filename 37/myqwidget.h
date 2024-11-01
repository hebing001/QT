#ifndef MYQWIDGET_H
#define MYQWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui {
class myQWidget;
}
QT_END_NAMESPACE

class myQWidget : public QWidget
{
    Q_OBJECT


public:
    QFile file;
    myQWidget(QWidget *parent = nullptr);
    ~myQWidget();

private slots:
    void on_btnOpen_clicked();
    void on_btnSave_myclicked();

    void on_btnSave_clicked();

    void on_btnClose_clicked();

    void onCurrentIndexChanged(int index);

    void on_textEdit_cursorPositionChanged();

    void on_myQWidget_destroyed();

private:
    Ui::myQWidget *ui;
};
#endif // MYQWIDGET_H

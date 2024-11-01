#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

signals: // Declare signals here if needed
    void customSignal();
    void customSignalPar(int value);

private slots: // Declare slots here if needed
    void on_someButton_myclicked(); // Example slot
    void on_someButton_myclickedpar(int value); // Example slot with parameter

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H

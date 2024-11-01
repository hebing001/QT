#include "myqwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myQWidget w;
    w.show();
    return a.exec();
    //解释一下这段代码

}

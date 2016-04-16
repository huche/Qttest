#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //这是我的git初次提交
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("QT窗口测试标题");
    w.setMaximumSize(640,480);//设置最大窗口
//    w.setMinimumSize(10,80);
    w.move(100,100);//设置起始位置
//    w.setStyleSheet("background:blue");//设置背景颜色
    w.setWindowIcon(QIcon(":/icon/battery_2.ico"));
    w.show();

    return a.exec();
}

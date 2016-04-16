#ifndef TWOWINDOW_H
#define TWOWINDOW_H

#include <QMainWindow>

namespace Ui {
class twoWindow;
}

class twoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit twoWindow(QWidget *parent = 0);
    ~twoWindow();

private:
    Ui::twoWindow *ui;
};

#endif // TWOWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qtheaders.h"
#include "qtstyles.h"
#include "singleton.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    SINGLETON_DECL(MainWindow)

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    enum window_state_e {
        NORMAL = 0,
        MINIMIZED,
        MAXIMIZED,
        FULLSCREEN,
    } window_state;

public slots:
    void mv_fullscreen();
};

#define g_mainwnd MainWindow::instance()
#endif // MAINWINDOW_H

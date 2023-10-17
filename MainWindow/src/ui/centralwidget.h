#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include "qtheaders.h"

#include "multiview.h"
#include "lsidewidget.h"
#include "rsidewidget.h"

class CentralWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CentralWidget(QWidget *parent = nullptr);
    ~CentralWidget();
signals:
protected:
    void initUI();
    void initConnect();

public:
    LsideWidget*    lside;
    MultiView*      mv;
    RsideWidget*    rside;
};

#endif // CENTRALWIDGET_H

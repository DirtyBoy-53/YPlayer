#ifndef VIDEOTITLEBAR_H
#define VIDEOTITLEBAR_H

#include "qtheaders.h"

class VideoTitlebar : public QFrame
{
    Q_OBJECT
public:
    explicit VideoTitlebar(QWidget *parent = nullptr);

protected:
    void initUI();
    void initConnect();

public:
    QLabel *labTitle;
    QPushButton *btnClose;
};

#endif // VIDEOTITLEBAR_H

#ifndef VIDEOTOOLBAR_H
#define VIDEOTOOLBAR_H
#include "qtheaders.h"

class VideoToolbar : public QFrame
{
    Q_OBJECT
public:
    explicit VideoToolbar(QWidget *parent = nullptr);

signals:
    void sigStart();
    void sigPause();
    void sigStop();

public slots:

protected:
    void initUI();
    void initConnect();

public:
    QPushButton *btnStart;
    QPushButton *btnPause;

    QPushButton *btnPrev;
    QPushButton *btnStop;
    QPushButton *btnNext;

    QSlider     *sldProgress;
    QLabel      *lblDuration;
};

#endif // VIDEOTOOLBAR_H

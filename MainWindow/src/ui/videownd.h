#ifndef VIDEOWND_H
#define VIDEOWND_H

#include <qtheaders.h>

class VideoWnd
{
public:
    VideoWnd(QWidget* parent = nullptr);
    virtual ~VideoWnd() {}

    virtual void setGeometry(const QRect& rc) = 0;
    virtual void update() = 0;

protected:
    void calcFPS();

public:
    YFrame      last_frame;
    int         fps;
    bool        draw_time;
    bool        draw_fps;
    bool        draw_resolution;
protected:
    // for calFPS
    uint64_t    tick;
    int         framecnt;
};

#endif // VIDEOWND_H

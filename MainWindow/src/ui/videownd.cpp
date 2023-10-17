#include "videownd.h"
#include "confile.h"

VideoWnd::VideoWnd(QWidget *parent)
{
    fps = 0;
    framecnt = 0;
    tick = 0;
    draw_time = g_confile->Get<bool>("draw_time", "ui", false);
    draw_fps = g_confile->Get<bool>("draw_fps", "ui", false);
    draw_resolution = g_confile->Get<bool>("draw_resolution", "ui", false);
}

void VideoWnd::calcFPS()
{
    if (gettick() - tick > 1000) {
        fps = framecnt;
        framecnt = 0;
        tick = gettick();
    }
    else {
        ++framecnt;
    }
}

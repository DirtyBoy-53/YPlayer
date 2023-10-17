#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include "qtheaders.h"
#include "avdef.h"

#include "videowndfactory.h"
#include "videotitlebar.h"
#include "videotoolbar.h"
#include "videoplayerfactory.h"

class VideoWidget : public QFrame
{
    Q_OBJECT
public:
    VideoWidget(QWidget *parent = nullptr);
    ~VideoWidget();
    enum Status {
        STOP,
        PAUSE,
        PLAY,
    };
public slots:
    void open(Media& media);
    void close();

    void start();
    void stop();
    void pause();
    void resume();
    void restart();
    void retry();

    void onTimerUpdate();
    void onOpenSucceed();
    void onOpenFailed();
    void onPlayerEOF();
    void onPlayerError();

    void setAspectRatio(aspect_ratio_t aspect_ratio);

protected:
    void initUI();
    void initConnect();
    void updateUI();

    virtual void resizeEvent(QResizeEvent *e);
    virtual void enterEvent(QEvent *e);
    virtual void leaveEvent(QEvent *e);
    virtual void mousePressEvent(QMouseEvent *e);
    virtual void mouseReleaseEvent(QMouseEvent *e);
    virtual void mouseMoveEvent(QMouseEvent *e);
    virtual void customEvent(QEvent* e);

public:
    int     playerid;
    int     status;
    QString title;
    int     fps;
    aspect_ratio_t  aspect_ratio;
    renderer_type_e renderer_type;

    VideoWnd       *videownd;
    VideoTitlebar  *titlebar;
    VideoToolbar   *toolbar;
    QPushButton     *btnMedia;
private:
    QPoint          ptMousePress;
    QTimer*         timer;

    Media          media;
    VideoPlayer*   pImpl_player;
    // for retry when SIGNAL_END_OF_FILE
    int             retry_interval;
    int             retry_maxcnt;
    int64_t         last_retry_time;
    int             retry_cnt;
};

#endif // VIDEOWIDGET_H

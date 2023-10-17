#include "videotitlebar.h"

#include "qtstyles.h"

VideoTitlebar::VideoTitlebar(QWidget *parent) : QFrame(parent)
{
    initUI();
    initConnect();
}

void VideoTitlebar::initUI() {
    setFixedHeight(VIDEO_TITLEBAR_HEIGHT);

    labTitle = new QLabel;
    btnClose = genPushButton(QPixmap(":/image/close.png"), tr("close"));

    QHBoxLayout *hbox = genHBoxLayout();
    hbox->addWidget(labTitle);
    hbox->addStretch();
    hbox->addWidget(btnClose);

    setLayout(hbox);
}

void VideoTitlebar::initConnect() {

}

#ifndef GLWND_H
#define GLWND_H

#include "videownd.h"
#include "glwidget.h"

class GLWnd : public VideoWnd, GLWidget {
public:
    GLWnd(QWidget* parent = nullptr);

    virtual void setGeometry(const QRect& rc) {
        GLWidget::setGeometry(rc);
    }

    virtual void update() {
        GLWidget::update();
    }

protected:
    virtual void paintGL();
    void drawTime();
    void drawFPS();
    void drawResolution();
};

#endif // GLWND_H

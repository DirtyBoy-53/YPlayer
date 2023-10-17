#ifndef VIDEOWNDFACTORY_H
#define VIDEOWNDFACTORY_H
#include "videownd.h"
#include "glwnd.h"
#include "sdl2wnd.h"

enum renderer_type_e {
    RENDERER_TYPE_OPENGL,
    RENDERER_TYPE_SDL2,
    // Windows only
    // RENDERER_TYPE_D3D,
    // RENDERER_TYPE_DDRAW,
    // RENDERER_TYPE_GDI,
};
#define DEFAULT_RENDERER_TYPE RENDERER_TYPE_OPENGL

class VideoWndFactory
{
public:
    static VideoWnd* create(renderer_type_e type = DEFAULT_RENDERER_TYPE, QWidget* parent = NULL) {
        switch(type) {
        case RENDERER_TYPE_OPENGL:
            return new GLWnd(parent);
        case RENDERER_TYPE_SDL2:
            return new SDL2Wnd(parent);
        default:
            return NULL;
        }
    }
};

#endif // VIDEOWNDFACTORY_H

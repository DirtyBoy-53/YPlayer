#ifndef MEDIA_H
#define MEDIA_H
#include <string>
#include "avdef.h"

typedef struct media_s {
    media_type_e    type;
    std::string     src;
    std::string     descr;
    int             index; // for camera index

    media_s() {
        type = MEDIA_TYPE_NONE;
        index = -1;
    }
} Media;
#endif // MEDIA_H

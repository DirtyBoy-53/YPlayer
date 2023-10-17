#ifndef VIDEOPLAYERFACTORY_H
#define VIDEOPLAYERFACTORY_H

#include "media.h"
#include "videoplayer.h"
#include "yffplayer.h"

class VideoPlayerFactory
{
public:
    static VideoPlayer* create(media_type_e type) {
        switch (type) {
        case MEDIA_TYPE_FILE:
        case MEDIA_TYPE_NETWORK:
            return new YFFPlayer;
        case MEDIA_TYPE_CAPTURE:
            // return new HVideoCapture;
            return new YFFPlayer;
        default:
            return NULL;
        }
    }
};

#endif // VIDEOPLAYERFACTORY_H

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

CONFIG += sdk_no_version_check

DEFINES -= UNICODE _UNICODE

TEMPLATE = app
RC_ICONS = favicon.ico
RC_FILE = yplayer.rc


TARGET          = yplayer
MOC_DIR         = build/moc
RCC_DIR         = build/rcc
UI_DIR          = build/ui
OBJECTS_DIR     = build/obj

DEFINES += QT_DEPRECATED_WARNINGS
RESOURCES += rc/skin.qrc rc/image.qrc
TRANSLATIONS = rc/lang/app_zh_CN.ts rc/lang/app_zh_CN.qm

INCLUDEPATH += src

#ui
INCLUDEPATH += src/ui
SOURCES +=\
    src/ui/glwnd.cpp \
    src/ui/mainwindow.cpp \
    src/ui/centralwidget.cpp \
    src/ui/lsidewidget.cpp \
    src/ui/multiview.cpp \
    src/ui/openmediadlg.cpp \
    src/ui/rsidewidget.cpp \
    src/ui/sdl2wnd.cpp \
    src/ui/videotitlebar.cpp \
    src/ui/videotoolbar.cpp \
    src/ui/videowidget.cpp \
    src/ui/videownd.cpp \
    src/ui/ytable.cpp \
    src/video/yffplayer.cpp


HEADERS += \
    src/qt/custom_event_type.h \
    src/ui/glwnd.h \
    src/ui/mainwindow.h \
    src/ui/openmediadlg.h \
    src/ui/qtstyles.h \
    src/ui/centralwidget.h \
    src/ui/lsidewidget.h \
    src/ui/multiview.h \
    src/ui/rsidewidget.h \
    src/ui/sdl2wnd.h \
    src/ui/videotitlebar.h \
    src/ui/videotoolbar.h \
    src/ui/videowidget.h \
    src/ui/videownd.h \
    src/ui/videowndfactory.h \
    src/ui/ytable.h \
    src/video/media.h \
    src/video/videoplayer.h \
    src/video/yffplayer.h


#video
INCLUDEPATH += src/video
SOURCES += \

HEADERS += \
    src/video/videoplayerfactory.h\

#global
INCLUDEPATH += 3rd/include

SOURCES += \
    src/main.cpp \

HEADERS += src/appdef.h src/confile.h src/avdef.h \

# win32
INCLUDEPATH += src/win32
HEADERS += src/win32/hdevice.h
SOURCES += src/win32/hdevice.cpp

# util
INCLUDEPATH += src/util
HEADERS += \
    src/util/ffmpeg_util.h \
    src/util/sdl_util.h \
    src/util/hgl.h \
    src/util/hgui.h \
    src/util/yframe.h

SOURCES += \
    src/util/yframe.cpp

# GL
DEFINES += GLEW_STATIC
INCLUDEPATH += src/GL
HEADERS += src/GL/glew.h
SOURCES += src/GL/glew.c

# qt
INCLUDEPATH += src/qt
HEADERS += \
    src/qt/glwidget.h \
    src/qt/qtheaders.h \
    src/qt/qtfunctions.h \
    src/qt/qtrcloader.h \

SOURCES += \
    src/qt/glwidget.cpp \
    src/qt/qtrcloader.cpp \

# hv
DEFINES += HV_SOURCE
INCLUDEPATH += src/hv src/hv/base src/hv/utils
HEADERS += \
    src/hv/hv.h \
    src/hv/base/hplatform.h \
    src/hv/base/hdef.h \
    src/hv/base/hbase.h \
    src/hv/base/hversion.h \
    src/hv/base/htime.h \
    src/hv/base/herr.h \
    src/hv/base/hbuf.h \
    src/hv/base/hlog.h \
    src/hv/base/hscope.h \
    src/hv/base/hstring.h \
    src/hv/base/hmutex.h \
    src/hv/base/hthread.h \
    src/hv/utils/singleton.h \
    src/hv/utils/iniparser.h \

SOURCES += \
    src/hv/base/hversion.c \
    src/hv/base/hbase.c \
    src/hv/base/herr.c \
    src/hv/base/htime.c \
    src/hv/base/hlog.c \
    src/hv/base/hstring.cpp \
    src/hv/utils/iniparser.cpp \

# SDL
LIBS += -lSDL2


win32 {
    DEFINES += WIN32_LEAN_AND_MEAN

    ## opencv
    ##LIBS += -lopencv_core341        \
    ##        -lopencv_highgui341     \
    ##        -lopencv_imgcodecs341   \
    ##        -lopencv_imgproc341     \
    ##        -lopencv_videoio341     \

    ## FFmpeg
    LIBS += -lavformat      \
            -lavdevice      \
            -lavcodec       \
            -lswresample    \
            -lswscale       \
            -lavutil        \

    ## Windows API
    LIBS += -lkernel32    \
            -luser32      \
            -lgdi32       \
            \
            -lopengl32    \
            -lglu32       \
            \
            -lole32       \
            -loleaut32    \
            -lstrmiids    \
            \
            -lws2_32      \
            -lsecur32     \

    win32-msvc {
        if (contains(DEFINES, WIN64)) {
            DESTDIR = $$_PRO_FILE_PWD_/bin/msvc2015_x64
            LIBS += -L$$_PRO_FILE_PWD_/3rd/lib/msvc2015_x64
        } else {
            DESTDIR = $$_PRO_FILE_PWD_/bin/msvc2015_x86
            LIBS += -L$$_PRO_FILE_PWD_/3rd/lib/msvc2015_x86
        }
    }

    win32-g++ {
        QMAKE_CFLAGS += -std=c99
        QMAKE_CXXFLAGS += -std=c++11
        if (contains(DEFINES, WIN64)) {
            DESTDIR = $$_PRO_FILE_PWD_/bin/mingw64
            LIBS += -L$$_PRO_FILE_PWD_/3rd/lib/mingw64
        } else {
            DESTDIR = $$_PRO_FILE_PWD_/bin/mingw32
            LIBS += -L$$_PRO_FILE_PWD_/3rd/lib/mingw32
        }

        # for ffmpeg staticlib
        LIBS += -liconv \
        -lz     \
        -lbz2   \
        -llzma  \
        -lcrypto \
        -lbcrypt
    }
}

unix {
    ## opencv
    ##LIBS += -lopencv_highgui    \
    ##        -lopencv_imgproc    \
    ##        -lopencv_core       \

    ## FFmpeg
    LIBS += -lavformat      \
            -lavdevice      \
            -lavcodec       \
            -lswresample    \
            -lswscale       \
            -lavutil        \


    QMAKE_CFLAGS += -std=c99
    QMAKE_CXXFLAGS += -std=c++11

    linux-g++ {
        DESTDIR = $$_PRO_FILE_PWD_/bin/linux
        LIBS += -L$$_PRO_FILE_PWD_/3rd/lib/linux
        LIBS += -L$$DESTDIR

        ## sys
        LIBS += -lGLU   \
                -lGL    \
                -lpthread   \
                -lm         \
    }

    macx-clang {
        DESTDIR = $$_PRO_FILE_PWD_/bin/mac
        LIBS += -L$$_PRO_FILE_PWD_/3rd/lib/mac
        LIBS += -L$$DESTDIR/$${TARGET}.app/Contents/Frameworks
        QMAKE_RPATHDIR += @executable_path/../Frameworks
    }
}


message(ARCH=$$QMAKE_HOST.arch)
message(QT_VERSION=$$QT_VERSION)
message(QMAKE=$$QMAKE_QMAKE)
message(QMAKESPEC=$$QMAKESPEC)
message(CC=$$QMAKE_CC)
message(CXX=$$QMAKE_CXX)
message(LINK=$$QMAKE_LINK)
message(CFLAGS=$$QMAKE_CFLAGS)
message(CXXFLAGS=$$QMAKE_CXXFLAGS)

message(PWD=$$PWD)
message(TARGET=$$DESTDIR/$$TARGET)
message(DEFINES=$$DEFINES)
message(CONFIG=$$CONFIG)
message(INCLUDEPATH=$$INCLUDEPATH)
message(LIBS=$$LIBS)

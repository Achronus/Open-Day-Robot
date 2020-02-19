#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/lewis/tiago_openday_ws/src/play_motion/play_motion"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/lewis/tiago_openday_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/lewis/tiago_openday_ws/install/lib/python2.7/dist-packages:/home/lewis/tiago_openday_ws/build/play_motion/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/lewis/tiago_openday_ws/build/play_motion" \
    "/usr/bin/python2" \
    "/home/lewis/tiago_openday_ws/src/play_motion/play_motion/setup.py" \
    build --build-base "/home/lewis/tiago_openday_ws/build/play_motion" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/lewis/tiago_openday_ws/install" --install-scripts="/home/lewis/tiago_openday_ws/install/bin"

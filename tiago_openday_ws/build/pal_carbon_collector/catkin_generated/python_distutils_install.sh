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

echo_and_run cd "/home/lewis/tiago_openday_ws/src/pal_statistics/pal_carbon_collector"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/lewis/tiago_openday_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/lewis/tiago_openday_ws/install/lib/python2.7/dist-packages:/home/lewis/tiago_openday_ws/build/pal_carbon_collector/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/lewis/tiago_openday_ws/build/pal_carbon_collector" \
    "/usr/bin/python2" \
    "/home/lewis/tiago_openday_ws/src/pal_statistics/pal_carbon_collector/setup.py" \
    build --build-base "/home/lewis/tiago_openday_ws/build/pal_carbon_collector" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/lewis/tiago_openday_ws/install" --install-scripts="/home/lewis/tiago_openday_ws/install/bin"

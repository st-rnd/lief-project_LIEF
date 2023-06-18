#!/usr/bin/sh
set -ex
cmake -B ${BUILD_DIR} -S ${SRC_DIR} -GNinja \
      -DLIEF_USE_CCACHE=off \
      -DCMAKE_CXX_COMPILER=/usr/bin/g++ -DCMAKE_C_COMPILER=/usr/bin/gcc
ninja -C ${BUILD_DIR} LIB_LIEF

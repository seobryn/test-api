cd ../build
cmake .. \
 -DCROW_INCLUDE_DIR="/usr/local/include/" \
 -DCMAKE_INSTALL_PREFIX=../release \
 -DCMAKE_BUILD_TYPE=RelWithDebInfo

BUILD_DIR=_build
mkdir $BUILD_DIR 
cd $BUILD_DIR
cmake .. -DCMAKE_INSTALL_PREFIX=..
make -j 2
make install
cd ..

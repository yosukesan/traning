
BUILD_DIR=build
LCOV_DIR=lcov

ls *.c *.h | xargs splint 

mkdir $LCOV_DIR
ls *.c *.h | xargs lcov -c -d -o $LCOV_DIR 

mkdir $BUILD_DIR
cd $BUILD_DIR

cmake ../
make

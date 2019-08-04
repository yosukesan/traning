
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX=../
make -j 2
make install
cd ../
cat data.txt | ./graph

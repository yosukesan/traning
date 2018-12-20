
PROJECT=linked_list

# mkdir working directory
if [ ! -d "build" ]; then
	mkdir build;
fi
cd build

# configure 
cmake -DCMAKE_INSTALL_PREFIX=../${PROJECT} -DCMAKE_BUILD_TYPE=Debug ../

# build
make -j 2

# install
make install

# run
cd ../
${PROJECT}/bin/main

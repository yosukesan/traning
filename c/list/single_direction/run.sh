
PROJECT=linked_list

# mkdir working directory
if [ ! -d "build" ]; then
	mkdir build;
fi
cd build

# configure 
cmake -DCMAKE_INSTALL_PREFIX=../${PROJECT} \
	-DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_FLAGS_DEBUG="-g -Wall -W -pedantic -O0" \
	 -DCMAKE_C_FLAGS_DEBUG="-g -Wall -W -pedantic -O0" ../

# build
make -j 2

# install
make install

# run
cd ../
${PROJECT}/bin/main

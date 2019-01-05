
project=binary_tree
build_dir="build"
debug=1 # 0 or 1

if [ ! -d $build_dir ]; then
	mkdir $build_dir
fi

cmake_debug="-DCMAKE_BUILD_TYPE=Release"
if [ $debug -eq 1 ]; then
	cmake_debug="-DCMAKE_BUILD_TYPE=Debug"
fi

cd $build_dir
cmake ../ -DCMAKE_INSTALL_PREFIX=../$project $cmake_debug
make 
make install

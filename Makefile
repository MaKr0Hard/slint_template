main:
	cmake -B build -DCMAKE_PREFIX_PATH=/opt/lib64/slint/Slint-cpp-1.18.0-Linux-x86_64;
	cmake --build build;

init:
	cmake -B build -DCMAKE_PREFIX_PATH=/opt/lib64/slint/Slint-cpp-1.18.0-Linux-x86_64;

build:
	cmake --build build;

run:
	./build/my_app

build-run:
	cmake -B build -DCMAKE_PREFIX_PATH=/opt/lib64/slint/Slint-cpp-1.18.0-Linux-x86_64;
	cmake --build build;
	./build/my_app
	#Make this like make make call itself

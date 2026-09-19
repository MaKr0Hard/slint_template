cmake_minimum_required(VERSION 3.21)
project(my_slint_app CXX)

# Finds the installed system/prefix Slint package
find_package(Slint REQUIRED)

add_executable(my_app src/main.cpp)
# Compiles your .slint design files into C++ headers
slint_target_sources(my_app ui/main.slint)



# Link your executable against Slint
target_link_libraries(my_app PRIVATE Slint::Slint)

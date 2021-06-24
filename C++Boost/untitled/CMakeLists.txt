cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)
include_directories(path)
add_executable(untitled main.cpp)

target_link_libraries(untitled hello_lib)
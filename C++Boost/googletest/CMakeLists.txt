cmake_minimum_required(VERSION 3.17)
project(googletest)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Google_test)
add_subdirectory(TT_lib)
include_directories(Google_test)
include_directories(TT_lib)

add_executable(googletest main.cpp)

target_link_libraries(googletest TT_lib)
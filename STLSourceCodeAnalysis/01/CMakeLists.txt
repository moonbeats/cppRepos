cmake_minimum_required(VERSION 3.17)
project(STLSourceCodeAnalysis)

set(CMAKE_CXX_STANDARD 14)

add_executable(1.1 1config-temporary-object.cpp)
add_executable(1.2 1config-inclass-init.cpp)
add_executable(1.3 1config-operator-overloading.cpp)
cmake_minimum_required(VERSION 3.17)
project(testroot)

set(CMAKE_CXX_STANDARD 11)

set(
        SOURCE_FILES main.cpp
)
add_executable(testroot ${SOURCE_FILES})

include_directories(TargetLib)
add_subdirectory(Google_tests)
add_subdirectory(TargetLib)

#target_link_libraries(testroot TargetLib)
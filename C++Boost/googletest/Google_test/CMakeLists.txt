project(Google_test)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# adding the Google_Tests_run target
add_executable(Google_Test_run test.cpp)

# linking Google_Tests_run with DateConverter_lib which will be tested
target_link_libraries(Google_Test_run TT_lib)

target_link_libraries(Google_Test_run gtest gtest_main)

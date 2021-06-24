project(TT_lib)
set(HEADER_FILES
        Calculator.h
        )
set(SOURCE_FILES
        Calculator.cpp
        )
add_library(TT_lib STATIC ${HEADER_FILES} ${SOURCE_FILES})

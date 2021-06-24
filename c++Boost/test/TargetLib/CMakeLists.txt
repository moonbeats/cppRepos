project(TargetLib)

set(HEADER_FILES
        calculator.h

        )

set(SOURCE_FILES
        calculator.cpp

        )

add_library(TargetLib STATIC ${SOURCE_FILES}  ${HEADER_FILES})
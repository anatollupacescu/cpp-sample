cmake_minimum_required(VERSION 3.0.0)
project(firstattempt VERSION 0.1.0)

set(This Example)

project(${This} C CXX)

include(CTest)
enable_testing()

add_executable(firstattempt main.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(googletest)

set(Headers
    Example.hpp
)

set(Sources
    Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)
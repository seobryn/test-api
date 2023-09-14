cmake_minimum_required(VERSION 3.10)

set(EXECUTABLE_NAME "Api")

project(${EXECUTABLE_NAME} VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()


find_package(Boost REQUIRED)


add_subdirectory(src)
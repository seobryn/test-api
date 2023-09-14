cmake_minimum_required(VERSION 3.10)

project(WebApi VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_BUILD_TYPE Release)

find_package(Boost REQUIRED)


add_subdirectory(src)
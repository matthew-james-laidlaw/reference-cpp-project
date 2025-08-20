cmake_minimum_required(VERSION 3.29.3)

project(REFERENCE CXX)

find_package(GTest REQUIRED)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(libs)
add_subdirectory(apps)

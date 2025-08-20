cmake_minimum_required(VERSION 3.29.3)

project(REFERENCE CXX)

include(cmake/flags.cmake)

add_compile_options(
    "$<$<CONFIG:Debug>:${DEBUG_FLAGS}>"
    "$<$<CONFIG:Release>:${RELEASE_FLAGS}>"
)

find_package(GTest CONFIG REQUIRED)

enable_testing()
include(GoogleTest)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(libs)
add_subdirectory(apps)

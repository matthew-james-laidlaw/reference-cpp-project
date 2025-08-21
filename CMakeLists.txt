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

add_executable(unit_tests)
target_link_libraries(unit_tests GTest::gtest_main)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(libs)
gtest_discover_tests(unit_tests)

add_subdirectory(apps)

set(CPACK_PACKAGE_VERSION "0.1.0")
set(CPACK_PACKAGE_FILE_NAME "${TARGET_TRIPLE}-${CPACK_PACKAGE_VERSION}")

install(TARGETS arithmetic calculator RUNTIME DESTINATION bin)
include(CPack)

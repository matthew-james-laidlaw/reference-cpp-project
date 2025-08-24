cmake_minimum_required(VERSION 3.29.3)

project(REFERENCE CXX)

# third party includes
include(GoogleTest)

# internal includes
include(${PROJECT_SOURCE_DIR}/cmake/modules/flags.cmake)

# vcpkg packages
find_package(GTest CONFIG REQUIRED)

# cmake cxx variables
set(CMAKE_CXX_STANDARD 23)

# initialize test executable
add_executable(unit_tests)
target_link_libraries(unit_tests GTest::gtest_main)

# set up library and executable targets
add_subdirectory(libs)
add_subdirectory(apps)

# finalize test executable
gtest_discover_tests(unit_tests)

include(CPack)
set(CPACK_PACKAGE_FILE_NAME "${TARGET_TRIPLE}-${CPACK_PACKAGE_VERSION}")

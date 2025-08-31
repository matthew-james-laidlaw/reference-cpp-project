cmake_minimum_required(VERSION 3.29.3)

project(REFERENCE CXX)

# third party includes
include(CTest)
include(GoogleTest)

# internal includes
include(${PROJECT_SOURCE_DIR}/cmake/modules/flags.cmake)

# vcpkg packages
find_package(GTest CONFIG REQUIRED)

# cmake cxx variables
set(CMAKE_CXX_STANDARD 23)

if(SANITIZERS)
    add_compile_options(-fsanitize=${SANITIZERS})
    add_link_options(-fsanitize=${SANITIZERS})
endif()

# initialize test executable
add_executable(unit_tests)
target_link_libraries(unit_tests GTest::gtest_main)

# set up library and executable targets
add_subdirectory(libs)
add_subdirectory(apps)

# finalize test executable
gtest_discover_tests(unit_tests)

string(TOUPPER ${CMAKE_HOST_SYSTEM_PROCESSOR} HOST_SYSTEM_PROCESSOR_UPPER)
if(HOST_SYSTEM_PROCESSOR_UPPER MATCHES "^(AARCH64|ARM64)$")
    set(ARCHITECTURE "arm64")
elseif(HOST_SYSTEM_PROCESSOR_UPPER MATCHES "^(AMD64|X64|X86_64)$")
    set(ARCHITECTURE "x64")
else()
    message(FATAL_ERROR "Unknown architecture: ${CMAKE_HOST_SYSTEM_PROCESSOR}")
endif()

set(CPACK_PACKAGE_FILE_NAME "${TARGET_NAME}-${ARCHITECTURE}")
include(CPack)

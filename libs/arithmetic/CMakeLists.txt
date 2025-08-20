add_library(arithmetic arithmetic.cpp)
target_include_directories(arithmetic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(arithmetic_tests test_arithmetic.cpp)
target_link_libraries(arithmetic_tests arithmetic GTest::gtest_main)

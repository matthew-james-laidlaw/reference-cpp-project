add_library(arithmetic arithmetic.cpp)
target_include_directories(arithmetic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_options(arithmetic PRIVATE
    ${BASE_FLAGS}
    $<$<CONFIG:Debug>:${DEBUG_FLAGS}>
    $<$<CONFIG:Release>:${RELEASE_FLAGS}>
)

target_sources(unit_tests PRIVATE test_arithmetic.cpp)
target_link_libraries(unit_tests arithmetic)

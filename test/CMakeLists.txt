cmake_minimum_required(VERSION 3.16)
project(esp32-s3_ex3_tests CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
add_subdirectory(../third_party/googletest googletest)

add_library(example_lib
    ../components/example_lib/example_lib.cpp
)
target_include_directories(example_lib PUBLIC
    ../components/example_lib/include
)

add_executable(tests
    test_example_lib.cpp
)
target_link_libraries(tests PRIVATE example_lib GTest::gtest_main)

add_test(NAME tests COMMAND tests)

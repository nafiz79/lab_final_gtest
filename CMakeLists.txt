# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(LabFinal_SWE)

set(CMAKE_CXX_STANDARD 17)

# Add GoogleTest
add_subdirectory(googletest)

# Include directories
include_directories(include)

# Main program
add_executable(main src/main.cpp src/try.cpp)
target_link_libraries(main)

# Test executable
enable_testing()
add_executable(runTests tests/test_sample.cpp src/try.cpp)
target_link_libraries(runTests gtest gtest_main)

# Discover tests
include(GoogleTest)
gtest_discover_tests(runTests)
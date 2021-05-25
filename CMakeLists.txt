cmake_minimum_required(VERSION 3.19)
project(GoogleTest)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(GoogleTest main.cpp Tests/ClassName.h Tests/test.cpp)

target_link_libraries(GoogleTest gtest gtest_main)
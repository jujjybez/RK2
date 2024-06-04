cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(testing)

option(BUILD_MAIN "Build main.cpp" OFF)
option(BUILD_TESTS "Build tests" OFF)

add_executable(main_test ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp)
install(TARGETS main_test RUNTIME DESTINATION bin)
enable_testing()
add_subdirectory(third-party/gtest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
file(GLOB SHAPES_TEST_SOURCES test.cpp)
add_executable(check ${SHAPES_TEST_SOURCES})
target_link_libraries(check gtest_main gmock gtest)
add_test(NAME check COMMAND check)

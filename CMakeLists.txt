cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(testing)

option(BUILD_MAIN "Build main.cpp" OFF)
option(BUILD_TESTS "Build tests" OFF)

add_library(main STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(main gcov)

if (BUILD_MAIN)
    add_executable(main_test ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp)
    install(TARGETS main RUNTIME DESTINATION bin)
endif()

if (BUILD_TESTS)
    enable_testing()
    add_subdirectory(third-party/gtest)
    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
    include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
    file(GLOB SHAPES_TEST_SOURCES tests/*.cpp)
    add_executable(check ${SHAPES_TEST_SOURCES})
    target_link_libraries(check main_test gtest_main gmock gtest)
    add_test(NAME check COMMAND check)
endif()

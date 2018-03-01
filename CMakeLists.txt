cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(arduino)

include_directories(arduino libraries)

set(SOURCE_FILES visit-sensor.cpp)

add_definitions(
        -DUBRRH
)

add_library(mcu_libraries ${SOURCE_FILES})
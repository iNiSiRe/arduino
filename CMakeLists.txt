cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(arduino)

include_directories(
        libraries/VisitSensor
        libraries/IRSensor
)

add_subdirectory(libraries)

set(SOURCE_FILES visit-sensor.cpp)

add_definitions(
        -DUBRRH
)

add_library(arduino ${SOURCE_FILES})
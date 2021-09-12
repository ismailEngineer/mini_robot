project(HelloWorld)

set(HEADER_DIR include)

cmake_minimum_required(VERSION 3.0)

include_directories(${HEADER_DIR})

set(SOURCES RobotCommand.cpp Navigation.cpp include/RobotCommand.hpp)

add_executable(start ${SOURCES})
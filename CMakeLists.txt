cmake_minimum_required(VERSION 3.7)
project(note_game)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Config.cpp Config.h)
add_executable(note_game ${SOURCE_FILES})
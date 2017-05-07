cmake_minimum_required(VERSION 3.7)
project(note_game)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Config.cpp Config.h Singleton.h Player.cpp Player.h StateManager.cpp StateManager.h State.cpp State.h)

find_package(yaml-cpp ncurses REQUIRED)

add_executable(note_game ${SOURCE_FILES})

target_link_libraries(note_game yaml-cpp)
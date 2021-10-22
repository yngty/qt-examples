cmake_minimum_required(VERSION 3.13)

project(analogclock LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core)
find_package(Qt5 COMPONENTS Gui)
find_package(Qt5 COMPONENTS Widgets)

add_executable(analogclock
     main.cpp
     analogclock.cpp analogclock.h
)

target_link_libraries(analogclock PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)



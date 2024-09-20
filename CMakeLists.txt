cmake_minimum_required(VERSION 3.5)

project(hello_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS true)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wpedantic")

add_executable(hello_cpp main.cpp)

install(TARGETS hello_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

cmake_minimum_required(VERSION 3.17)
project(mijncraft_server_restarter)

set(CMAKE_CXX_STANDARD 20)

include_directories(cxx_argp)

add_executable(mijncraft_server_restarter main.cpp cmd_parser.cpp cmd_parser.hpp)
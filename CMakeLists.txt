cmake_minimum_required(VERSION 3.15)
project(shape)

set(CMAKE_CXX_STANDARD 17)

add_executable(shape main.cpp Circle.cpp Circle.h Shape.cpp Shape.h Point.cpp Point.h Square.cpp Square.h Rectangle.cpp Rectangle.h Triangle.cpp Triangle.h)
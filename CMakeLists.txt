cmake_minimum_required(VERSION 4.0)
project(bibliotecaMusical)

set(CMAKE_CXX_STANDARD 20)

add_executable(bibliotecaMusical main.cpp
        Cancion.cpp
        Cancion.h)

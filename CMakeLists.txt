cmake_minimum_required(VERSION 3.29)
project(Caso_Final_Integrador_Tema_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(load_script)

add_executable(Caso_Final_Integrador_Tema_3
    load_script/load_script.cpp
    load_script/load_script.h
    main.cpp
    main.h)

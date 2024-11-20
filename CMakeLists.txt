cmake_minimum_required(VERSION 3.29)
project(Lara_Israel_ExamenCPP1)

set(CMAKE_CXX_STANDARD 14)

include_directories("parte c")
include_directories("parte c/asistencia-c")
include_directories("parte c/estudiante-c")
include_directories("parte c++")
include_directories("parte c++/asistencia-c++")
include_directories("parte c++/estudiante-c++")

add_executable(Lara_Israel_ExamenCPP1
    "parte c/asistencia-c/asistencia.c"
    "parte c/asistencia-c/asistencia.h"
    "parte c/estudiante-c/estudiante.c"
    "parte c/estudiante-c/estudiante.h"
    "parte c/config.h"
    "parte c++/asistencia-c++/asistencia.cpp"
    "parte c++/asistencia-c++/asistencia.h"
    "parte c++/estudiante-c++/estudiante.cpp"
    "parte c++/estudiante-c++/estudiante.h"
        main.cpp)

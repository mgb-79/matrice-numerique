cmake_minimum_required(VERSION 3.5)
project(matrice-numerique C)
include(CTest)
enable_testing()

link_directories(${CMAKE_SOURCE_DIR})
set(CMAKE_C_FLAGS "-std=c99 -g -Wall")
add_executable(projet_text main.c matrix.c pixel.c ppm.c free_matrix.c alloc.c)


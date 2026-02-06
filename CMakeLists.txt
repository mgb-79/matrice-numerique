cmake_minimum_required(VERSION 3.5)
project(matrice-numerique LANGUAGES C CXX)
include(CTest)
enable_testing()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

link_directories(${CMAKE_SOURCE_DIR})

set(CMAKE_C_FLAGS  "-std=c99 -g -Wall")

set(COMMON_C_SOURCES
    matrix.c pixel.c ppm.c free_matrix.c alloc.c
)

set(GUI_CPP_SOURCES
    gui.cpp
)

add_executable(project_text
    main_text.c
    ${COMMON_C_SOURCES}
)

add_executable(project_gui
    main_gui.cpp
    ${GUI_CPP_SOURCES}
    ${COMMON_C_SOURCES}
)
    


set_source_files_properties(matrix.c PROPERTIES LANGUAGE C)

target_link_libraries(project_gui Qt5::Widgets)

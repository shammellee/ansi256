cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)

set(
  PROJECT_VERSION
  ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}
)

set(SRC_DIR "src" CACHE STRING "Source directory")
set(EXE_NAME "colorbase" CACHE STRING "Name of executable")
set(PROJECT_NAME "Colorbase" CACHE STRING "Project name")

project(${PROJECT_NAME} VERSION ${PROJECT_VERSION})

set(CMAKE_VERBOSE_MAKEFILE OFF)
set(CMAKE_BINARY_DIR bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY lib)

include_directories(${PROJECT_SOURCE_DIR})

set(SOURCES
  ${SRC_DIR}/main.c
  ${SRC_DIR}/greyscale.c
  ${SRC_DIR}/intense.c
  ${SRC_DIR}/spectrum.c
  ${SRC_DIR}/standard.c
  ${SRC_DIR}/color/color.c
)

add_executable(${EXE_NAME} ${SOURCES})

set_property(TARGET ${EXE_NAME} PROPERTY C_STANDARD 99)

message(STATUS "${PROJECT_NAME} built!")


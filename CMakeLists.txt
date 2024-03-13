cmake_minimum_required(VERSION 3.27)
project(msvc_or_github_actionFlow_bug)

set(CMAKE_CXX_STANDARD 23)

set(SRC_DIR src)

message(STATUS "Loading...")

# Source Files...
file(GLOB_RECURSE SOURCE_FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/${SRC_DIR}/*.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/${SRC_DIR}/*.c
)

# Header Files...
file(GLOB_RECURSE CURRENT_HEADERS
        ${CMAKE_CURRENT_SOURCE_DIR}/${SRC_DIR}/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/${SRC_DIR}/*.hpp
)

# Modules...
#
file(GLOB_RECURSE FAST_MODULES
        ${CMAKE_CURRENT_SOURCE_DIR}/${SRC_DIR}/*.cppm
)

message(STATUS "Building...")

# Build .exe
add_executable(
        ${PROJECT_NAME}      #[[Project Name]]
        ${SOURCE_FILES}      #[[.cpp]]
        ${CURRENT_HEADERS}   #[[.h]]
        main.cppm
)

target_sources(${PROJECT_NAME}
        PUBLIC
        ${FAST_MODULES}      #[[Modules]]
)

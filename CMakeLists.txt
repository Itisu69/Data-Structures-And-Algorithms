cmake_minimum_required(VERSION 3.25)
project(${PROJECT_NAME} C CXX)

set(CMAKE_CXX_STANDARD ${CMAKE_LANGUAGE_VERSION})
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Automatically search the directory for any .cpp or .c files you create
file(GLOB_RECURSE SOURCES "*.cpp" "*.c")

# Automatically bundle them into a unified project layout
add_executable(${PROJECT_NAME} ${SOURCES})
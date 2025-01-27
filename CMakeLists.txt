# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(CCLoader VERSION 1.0 LANGUAGES C)

# Prevent in-source builds if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}") message(FATAL_ERROR "In-source builds are not allowed. Please create a separate build directory.") endif()

add_subdirectory(SourceCode)
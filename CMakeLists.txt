# Set CMake minimum version and CMake policy required by UrhoCommon module
cmake_minimum_required (VERSION 3.2.3)

# Set project name
project (Unamed)
# Set CMake modules search path
set (CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake/Modules)
set (CMAKE_CXX_STANDARD 14)
# Include UrhoCommon.cmake module after setting project name
include (UrhoCommon)
# Define target name
set (TARGET_NAME ${PROJECT_NAME})
# Define source files
file(GLOB_RECURSE SOURCE_FILES "Source/*.*pp" "Source/*.h")
# Setup target with resource copying
setup_main_executable ()



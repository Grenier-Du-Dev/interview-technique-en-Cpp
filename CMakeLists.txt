cmake_minimum_required(VERSION 3.8)
project(interviewtech  LANGUAGES CXX)

# Include subdirectories
add_subdirectory(src)


# Include header files
include_directories(include)


set (CMAKE_CXX_STANDARD 17)


# Include different algorithms here
add_subdirectory(1.insertingSort)

# add exmples
add_subdirectory(../exemples exemples)

# Include the main.cpp file
add_executable(interviewtech main.cpp)

# Link the libraries
target_link_libraries(interviewtech exemples_lib insert_sort_lib_lib)

# cmake_minimum_required(VERSION 3.10)
# project(impl_cpp)

# set(CMAKE_CXX_STANDARD 23)

# add_executable(impl_cpp main.cpp)


cmake_minimum_required(VERSION 3.10)
project(MyAlgorithmsLib)

set(CMAKE_CXX_STANDARD 17)

# Add header files (for IDE visibility)
set(HEADER_FILES
    include/help_func.h
    include/algo/algo.h
    include/algo/sort/insertion_sort.h
    include/data_structure/data_structure.h
)
# Add source files
set(SOURCE_FILES
    main.cpp
)

# Create executable (or library)
add_executable(MyAlgorithms ${SOURCE_FILES} ${HEADER_FILES})

# Make sure headers are found
target_include_directories(MyAlgorithms PRIVATE include)
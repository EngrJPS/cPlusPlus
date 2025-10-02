# Require a minimum version of cmake
cmake_minimum_required(VERSION 3.10.0) 

# Sets the name of the project.
project(mycpp_project VERSION 0.1.0 LANGUAGES C CXX)

# Adds an executable target called <name> to be built from the source files listed in the command invocation.
add_executable(${PROJECT_NAME} main.cpp)

# Adds a library target called <name> to be built from the source files listed in the command invocation.
add_library(mylib Account.cpp AddNumbers.cpp)

# The named <target> must have been created in the current directory by a command such as add_executable or add_library.
target_link_libraries(${PROJECT_NAME} mylib)


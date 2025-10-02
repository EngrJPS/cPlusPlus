cmake_minimum_required(VERSION 3.20.0)

project(myproject)

add_executable(${PROJECT_NAME} main.cpp)

add_library(mylib Account.cpp AddNumbers.cpp)

target_link_libraries(${PROJECT_NAME} mylib)

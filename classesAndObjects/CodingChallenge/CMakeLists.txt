cmake_minimum_required(VERSION 3.10.0)
project(section_challenge VERSION 0.1.0 LANGUAGES C CXX)

add_executable(${PROJECT_NAME} main.cpp)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_library(mylib Dog.cpp)

target_link_libraries(${PROJECT_NAME} mylib)
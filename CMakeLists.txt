cmake_minimum_required(VERSION 3.5)

project(cmake_learning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/basic)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/transformations)

add_executable(bin ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(bin basic)
target_link_libraries(bin transformations)

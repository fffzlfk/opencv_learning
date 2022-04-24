cmake_minimum_required(VERSION 3.22)

project(cmake_learning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_compile_options(-std=c++17 -Wall -Wextra -Werror)

# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/basic)
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/transformations)
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/cuda)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/isa)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/utils)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
# target_link_libraries(bin basic)
# target_link_libraries(bin transformations)
# target_link_libraries(bin cuda)
find_package(OpenCV CONFIG REQUIRED)
target_link_libraries(main PRIVATE isa ${OpenCV_LIBS})

add_executable(cuda_info cuda_info.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(cuda_info ${OpenCV_LIBS})

add_library(cuda cuda_gauss.cpp)
target_include_directories(cuda PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

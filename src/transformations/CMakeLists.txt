add_library(transformations
    filter_2d.cpp
    copy_make_border.cpp
    sobel_derivatives.cpp
)

target_include_directories(transformations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(transformations ${OpenCV_LIBS})
add_library(basic 
    basic_drawing.cpp
    random.cpp blur.cpp
    erosion_dilatation.cpp
    opening_closing_hats.cpp
    hit_or_miss.cpp
    morph_lines_detection.cpp
)
target_include_directories(basic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(basic ${OpenCV_LIBS})
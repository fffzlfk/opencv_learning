add_library(basic basic_drawing.cpp random.cpp blur.cpp)
target_include_directories(basic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(basic ${OpenCV_LIBS})
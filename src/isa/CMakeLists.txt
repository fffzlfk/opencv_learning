add_library(isa INTERFACE)
target_include_directories(isa INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(isa INTERFACE utils)

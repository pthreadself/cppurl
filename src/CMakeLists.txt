set(SOURCE_FILES Request.cpp)
add_library(cppurl ${SOURCE_FILES})
target_link_libraries(cppurl curl)
set(SOURCE_FILES Request.cpp)
add_library(cppurl SHARED ${SOURCE_FILES})
target_link_libraries(cppurl curl)
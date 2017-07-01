cmake_minimum_required(VERSION 3.0)

include_directories(../include)
include_directories(../include/ShaderTool)

if(${CMAKE_SYSTEM_NAME} STREQUAL Windows)
add_definitions("/DUNICODE /D_UNICODE /W4 /WX /wd4100")
else()
add_definitions("-Wall -Wextra -Werror -Wno-unused-parameter -Wno-unused-value")
endif()

file(GLOB_RECURSE HEADERS_PRI *.h)
file(GLOB_RECURSE HEADERS_PUB ../include/*.h)
file(GLOB SOURCES *.cpp)

list(REMOVE_ITEM SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp)

add_library(ShaderTool STATIC ${HEADERS_PRI} ${HEADERS_PUB} ${SOURCES})
set_property(TARGET ShaderTool PROPERTY CXX_STANDARD 14)

add_executable(ShaderToolCmd Main.cpp)
set_property(TARGET ShaderToolCmd PROPERTY CXX_STANDARD 14)
target_link_libraries(ShaderToolCmd ShaderTool)

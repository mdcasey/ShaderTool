cmake_minimum_required(VERSION 3.0)

if(${CMAKE_SYSTEM_NAME} STREQUAL Windows)
add_definitions("/DUNICODE /D_UNICODE /W4 /WX /wd4100")
else()
add_definitions("-Wall -Wextra -Werror -Wno-unused-parameter -Wno-unused-value")
endif()

file(GLOB HEADERS *.h)
file(GLOB SOURCES *.cpp)

add_executable(ShaderTool ${HEADERS} ${SOURCES})
set_property(TARGET ShaderTool PROPERTY CXX_STANDARD 14)

cmake_minimum_required(VERSION 3.15)
project(LunaChat)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(SOURCES src/main.cpp)

add_executable(LunaChat ${SOURCES})

target_include_directories(LunaChat PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(LunaChat PRIVATE ${CONAN_LIBS})
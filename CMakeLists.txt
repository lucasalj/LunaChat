cmake_minimum_required(VERSION 3.15)
project(LunaChat)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(SOURCES src/lunaserver/Server.cpp
        src/lunaserver/HttpSession.cpp)

add_executable(LunaChat ${SOURCES} src/main.cpp)

target_include_directories(LunaChat PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(LunaChat PRIVATE ${CONAN_LIBS})

set(TEST_SOURCES tests/main_test.cpp
        tests/ProtocolSerializationTest.cpp)

add_executable(Tests ${TEST_SOURCES} ${SOURCES})

target_include_directories(Tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(Tests PRIVATE ${CONAN_LIBS})
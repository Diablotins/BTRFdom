project(BTRFdom)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_VERBOSE_MAKEFILE false)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -Wall -static-libgcc -static-libstdc++")
#for qtcreator
add_definitions("-D__GXX_EXPERIMENTAL_CXX0X__ -DBUILDING_BTRF")

include_directories("${CMAKE_SOURCE_DIR}/impl")
include_directories("${CMAKE_SOURCE_DIR}/common")
include_directories("${CMAKE_SOURCE_DIR}/interfaces")

file(GLOB_RECURSE IMPL_SRC_LIST "${CMAKE_SOURCE_DIR}/impl/*.cpp" "${CMAKE_SOURCE_DIR}/impl/*.h")
file(GLOB_RECURSE COMMON_SRC_LIST "${CMAKE_SOURCE_DIR}/common/*.cpp" "${CMAKE_SOURCE_DIR}/common/*.h")
file(GLOB_RECURSE INTERFACES_SRC_LIST "${CMAKE_SOURCE_DIR}/interfaces/*.cpp" "${CMAKE_SOURCE_DIR}/interfaces/*.h")

add_library(${PROJECT_NAME} SHARED ${IMPL_SRC_LIST} ${COMMON_SRC_LIST} ${INTERFACES_SRC_LIST})



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -Wall -static-libgcc -static-libstdc++")

file(GLOB_RECURSE DLLCLIENT_SRC_LIST "${CMAKE_SOURCE_DIR}/dll-client/*.cpp" "${CMAKE_SOURCE_DIR}/dll-client/*.h")
add_executable(BTRFReader ${DLLCLIENT_SRC_LIST})
target_link_libraries(BTRFReader ${PROJECT_NAME})

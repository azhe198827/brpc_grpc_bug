cmake_minimum_required(VERSION 2.8)

#project(mutil-inference-sever VERSION 0.0.1 LANGUAGES C CXX)
#set(CMAKE_CXX_STANDARD 11)

project(sever)
add_definitions(-std=c++11)

get_filename_component(source_path ${CMAKE_SOURCE_DIR} PATH)
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")

message(${source_path})
include_directories(${source_path}/code/include)
link_directories(${source_path}/code/lib)

add_executable(server http_server.cpp http.pb.cc)


target_link_libraries(server PUBLIC
    brpc
    protobuf
       )
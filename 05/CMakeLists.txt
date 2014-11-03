cmake_minimum_required(VERSION 2.8.4)
project(fs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++11")

set(SOURCE_FILES file_t.cpp directory_t.cpp fs_t.cpp filebuf.cpp utils/init.cpp utils/format.cpp utils/import.cpp utils/export.cpp utils/ls.cpp utils/copy.cpp utils/move.cpp utils/rm.cpp utils/mkdir.cpp)
add_executable(fs ${SOURCE_FILES})
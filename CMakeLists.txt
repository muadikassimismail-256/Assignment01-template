cmake_minimum_required(VERSION 3.5)

project(Test_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Test_3 Func.cpp)

install(TARGETS Test_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})


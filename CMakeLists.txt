cmake_minimum_required(VERSION 3.15)
project(singleton)

set(CMAKE_CXX_STANDARD 14)

add_executable(singleton main.cpp Singleton.h Singleton.cpp ThreadSafeSingleton.cpp ThreadSafeSingleton.h)

set(Boost_INCLUDE_DIR C:/Users/1358365/Desktop/boost_1_71_0)
set(Boost_LIBRARY_DIR C:/Users/1358365/Desktop/boost_1_71_0/lib)
find_package(Boost COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
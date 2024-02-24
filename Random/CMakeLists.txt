cmake_minimum_required(VERSION 3.5)

add_library(Random
  ${CMAKE_CURRENT_SOURCE_DIR}/src/random.cpp
)

target_include_directories(Random PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

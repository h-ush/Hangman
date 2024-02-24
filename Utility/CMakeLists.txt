cmake_minimum_required(VERSION 3.5)

add_library(Utility
  ${CMAKE_CURRENT_SOURCE_DIR}/src/utility.cpp
)

target_include_directories(Utility PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

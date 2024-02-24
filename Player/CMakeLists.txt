cmake_minimum_required(VERSION 3.5)

add_library(Player
  ${CMAKE_CURRENT_SOURCE_DIR}/src/player.cpp
)

target_link_libraries(Player PRIVATE
  Utility
)

target_include_directories(Player PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_dependencies(Player
  Utility
)

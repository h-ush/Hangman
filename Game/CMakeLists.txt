cmake_minimum_required(VERSION 3.5)

add_library(Game
  ${CMAKE_CURRENT_SOURCE_DIR}/src/game.cpp
)

target_link_libraries(Game PUBLIC
  Player
  Random
  Utility
)

target_include_directories(Game PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_dependencies(Game
  Player
  Random
  Utility
)

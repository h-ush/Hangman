cmake_minimum_required(VERSION 3.5)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

project(hangman)

message("CMAKE_CXX_FLAGS_DEBUG: ${CMAKE_CXX_FLAGS_DEBUG}")

add_executable(hangman
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_link_libraries(hangman PUBLIC
  Player
  Random
  Game
  Utility
)

add_subdirectory(Player)
add_subdirectory(Random)
add_subdirectory(Game)
add_subdirectory(Utility)

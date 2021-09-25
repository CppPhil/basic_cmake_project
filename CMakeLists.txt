cmake_minimum_required(VERSION 3.15)

project(basic_cmake_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(external/philslib)
add_subdirectory(external/fmtlib)

add_executable(basic_cmake_app include/main.hpp src/main.cpp)

target_include_directories(
  basic_cmake_app
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(
  basic_cmake_app
  PRIVATE
  CppPhil::philslib
  fmt::fmt)

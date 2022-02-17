#
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
enable_testing()
include(FetchContent)

# Embree
FetchContent_Populate(
  embree
  URL https://github.com/embree/embree/releases/download/v3.13.3/embree-3.13.3.x86_64.linux.tar.gz
)
include_directories(${embree_SOURCE_DIR}/include)
link_directories(${embree_SOURCE_DIR}/lib)

add_executable(actions_test main.cpp)
target_link_libraries(actions_test PRIVATE embree3)

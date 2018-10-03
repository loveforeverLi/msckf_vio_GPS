cmake_minimum_required(VERSION 2.8.12)
project(test)

add_compile_options(-std=c++11)

# Modify cmake module path if new .cmake files are required
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_LIST_DIR}/cmake")

## System dependencies are found with CMake's conventions
find_package(Eigen3 REQUIRED)

###########
## Build ##
###########

include_directories(
  ../include
  ${EIGEN3_INCLUDE_DIR}
)

add_executable(test test.cpp)



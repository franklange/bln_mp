cmake_minimum_required(VERSION 3.10)
project(bln_mp)

find_package(nlohmann_json REQUIRED)

option(BLN_MP_TESTS "Enable Tests" OFF)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build Type" FORCE)
endif()

add_subdirectory(third_party/bln_log)
add_subdirectory(third_party/bln_net)

if (BLN_MP_TESTS)
    enable_testing()
endif()

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  add_compile_options(-Wall -Wextra -pedantic)
endif()

add_subdirectory(common)
add_subdirectory(server)

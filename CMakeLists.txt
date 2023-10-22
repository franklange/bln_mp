cmake_minimum_required(VERSION 3.10)
project(bln_mp)

option(BLN_MP_TESTS "Enable Tests" OFF)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build Type" FORCE)
endif()

if (BLN_MP_TESTS)
    enable_testing()
endif()


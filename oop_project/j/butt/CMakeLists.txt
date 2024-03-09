cmake_minimum_required(VERSION 3.25)
project(BUTT)

set(CMAKE_CXX_STANDARD 17)

add_executable(BUTT main.cpp balanceType.cpp balanceType.h dateType.cpp dateType.h accountType.cpp accountType.h Current.cpp Current.h FixedDeposit.cpp FixedDeposit.h)

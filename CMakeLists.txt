cmake_minimum_required(VERSION 3.24)
project(Lab)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab main.cpp Bank.h Bank.cpp Account.h Transaction.h)

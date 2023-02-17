cmake_minimum_required(VERSION 3.22.1)

project(SimpleCalculator)

set(SRCS main.cpp VectorOperations.cpp)

add_executable(SimpleCalculator ${SRCS})
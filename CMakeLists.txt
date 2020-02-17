cmake_minimum_required(VERSION 3.13)
project(CircularSingleLinkedList C)

set(CMAKE_C_STANDARD 11)

add_executable(CircularSingleLinkedList main.c include/CircularSingleLinkedList.c include/CircularSingleLinkedList.h)
cmake_minimum_required(VERSION 3.12)
project(Graph C)

set(CMAKE_C_STANDARD 99)

add_executable(Graph main.c graph.c graph.h dijkstra.c dijkstra.h)
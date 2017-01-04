cmake_minimum_required(VERSION 3.5)
project(graph-exercise)

set(CMAKE_C_STANDARD 99)

include_directories(include/)


# MAIN:

#add_executable(minsumdiff src/main.c)


# TESTS:

add_executable(test_linkedlist test/test_linkedlist.c src/linkedlist.c)
add_executable(test_adjlist test/test_adjlist.c src/adjlist.c src/linkedlist.c)
add_executable(test_adjmatrix test/test_adjmatrix.c src/adjmatrix.c)

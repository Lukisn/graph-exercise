cmake_minimum_required(VERSION 3.5)
project(graph-exercise)

set(CMAKE_C_STANDARD 99)

include_directories(include/)


# FILE GLOBBING:
file(GLOB_RECURSE SOURCE_FILES src/*.c)
#file(GLOB_RECURSE TEST_SOURCE_FILES test/*.c)


# MAIN:
#set(SOURCE_FILES src/main.c src/adjmatrix.c src/adjlist.c src/linkedlist.c)
add_executable(run ${SOURCE_FILES})


# TESTS:
add_executable(test_linkedlist test/test_linkedlist.c src/linkedlist.c)
add_executable(test_adjlist test/test_adjlist.c src/adjlist.c src/linkedlist.c)
add_executable(test_adjmatrix test/test_adjmatrix.c src/adjmatrix.c)

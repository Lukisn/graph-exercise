# graph-exercise


## Overview

This repo contains a little exercise project about implementing graph data structures. Those structures are

* Adjacency Matrix
* Adjacency List

where the adjacency list depends on an additional implementation of a linked list also contained in this project.


## Structure

The Project is structures as follows:

    .
    ├── CMakeLists.txt
    ├── README.md
    ├── build
    ├── include
    │   ├── adjlist.h
    │   ├── adjmatrix.h
    │   └── linkedlist.h
    ├── script
    │   ├── measurements.eps
    │   ├── measurements.txt
    │   └── plot.gp
    ├── src
    │   ├── adjlist.c
    │   ├── adjmatrix.c
    │   ├── linkedlist.c
    │   └── run.c
    └── test
        ├── test_adjlist.c
        ├── test_adjmatrix.c
        └── test_linkedlist.c

The `src/` and `include/` directories contain the code for the adjacency matrix and adjacency list representations of graphs as well as the main file `run.c` that starts, runs and outputs the measurements.

The `tests/` folder contains little test programs for checking the linked list and graph implementations for sanity.
They are not actual unit tests but only shallow usage tests of the implementations created during development.

The `script/` folder contains a little gnuplot script `plot.gp` for plotting the measurement data.
It also has two actual examples, one measurement data file `measurements.txt` and a plot created using the gnuplot script `measurements.eps`.

The `build/` folder is supposed to be used for building the programs using the included `CMakeLists.txt` file.


## Build

    $ cd build/
    build/$ cmake ..
    build/$ make


## Run Tests

    build/$ ./test_linkedlist
    build/$ ./test_adjmatrix
    build/$ ./test_adjlist


## Run

    build/$ ./run


# Plot data

The gnuplot script assumes the `measurements.txt` data file to be within the `scripts/` folder.
Use the example of move actual data file from `build/` to `script/`.

    $ cd script/
    script/$ gnuplot plot.gp

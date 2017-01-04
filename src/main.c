#include <stdio.h>
#include <sys/time.h>
#include "adjmatrix.h"
#include "adjlist.h"

/* get current time of day in nanoseconds */
double gtod()
{
    struct timeval now;
    gettimeofday(&now, NULL);
    return now.tv_sec * 1.e9 + now.tv_usec * 1.e3;
}

int main(int argc, char* argv[])
{
    // CONSTANTS:
    const int DIM = 10;  // 1000
    const int SAMPLES = 1000;

    // VARIABLES:
    int i, n;
    double start, end, diff;
    LinkedList bandwidths = ll_create();
    LinkedList adjmatrix_times = ll_create();
    LinkedList adjlist_times = ll_create();

    // MEASUREMENTS:
    // run measurements for adjacency matrix:
    AdjMatrix adjmat;

    // n = 1:
    start = gtod();  // === START OF MEASUREMENT ===
    for (i = 0; i < SAMPLES; ++i) { adjmat = am_build_from_band(DIM, 1); }
    end = gtod();  // === END OF MEASUREMENT ===
    diff = (end - start) / SAMPLES;
    printf("n = %d: mean elapsed time = %lf ns (%d samples)\n", 1, diff, SAMPLES);
    ll_add(&bandwidths, 1);
    ll_add(&adjmatrix_times, diff);

    // n = 49 ... 1999:
    for (n = 49; n <= 1999; n += 50) {
        start = gtod();  // === START OF MEASUREMENT ===
        for (i = 0; i < SAMPLES; ++i) { adjmat = am_build_from_band(DIM, n); }
        end = gtod();  // === END OF MEASUREMENT ===
        diff = (end - start) / SAMPLES;
        printf("n = %d: mean elapsed time = %lf ns (%d samples)\n", n, diff, SAMPLES);
        ll_add(&bandwidths, n);
        ll_add(&adjmatrix_times, diff);
    }

    // run measurements for adjacency list:
    AdjList adjlist;

    // n = 1:
    start = gtod();  // === START OF MEASUREMENT ===
    for (i = 0; i < SAMPLES; ++i) { adjlist = al_build_from_band(DIM, 1); }
    end = gtod();  // === END OF MEASUREMENT ===
    diff = (end - start) / SAMPLES;
    printf("n = %d: mean elapsed time = %lf ns (%d samples)\n", 1, diff, SAMPLES);
    ll_add(&adjlist_times, diff);

    // n = 49 ... 1999:
    for (n = 49; n <= 1999; n += 50) {
        start = gtod();  // === START OF MEASUREMENT ===
        for (i = 0; i < SAMPLES; ++i) { adjlist = al_build_from_band(DIM, n); }
        end = gtod();  // === END OF MEASUREMENT ===
        diff = (end - start) / SAMPLES;
        printf("n = %d: mean elapsed time = %lf ns (%d samples)\n", n, diff, SAMPLES);
        ll_add(&adjlist_times, diff);
    }

    printf("bandwidths: "); ll_print(&bandwidths);
    printf("adjmatrix:  "); ll_print(&adjmatrix_times);
    printf("adjlist:    "); ll_print(&adjlist_times);

    // TODO: file output

    return 0;
}

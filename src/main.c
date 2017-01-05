#include <stdio.h>
#include <sys/time.h>
#include "adjmatrix.h"
#include "adjlist.h"

/* get current time of day in seconds */
double gtod()
{
    struct timeval tv_now;
    gettimeofday(&tv_now, NULL);
    return tv_now.tv_sec + tv_now.tv_usec / 1.e6;
}

int main(int argc, char* argv[])
{
    // CONSTANTS:
    const int DIM = 1000;  // square matrix dimension mat^(DIMxDIM)
    const int SAMPLES = 1;  // number of measurement samples to take mean from

    // VARIABLES:
    int i, n;  // loop variable, current bandwidth
    double start, end, diff;  // timing variables
    LinkedList bandwidths = ll_create();
    LinkedListDouble adjmatrix_times = lld_create();
    LinkedListDouble adjlist_times = lld_create();

    // MEASUREMENTS:
    // run measurements for adjacency matrix:
    AdjMatrix adjmat;

    // n = 1:
    start = gtod();  // === START OF MEASUREMENT ===
    for (i = 0; i < SAMPLES; ++i) { adjmat = am_build_from_band(DIM, 1); }
    end = gtod();  // === END OF MEASUREMENT ===
    diff = (end - start) / SAMPLES;
    printf("n = %d: mean elapsed time = %e s (%d samples)\n", 1, diff, SAMPLES);
    ll_add(&bandwidths, 1);
    lld_add(&adjmatrix_times, diff);

    // n = 49 ... 1999:
    for (n = 49; n <= 1999; n += 50) {
        start = gtod();  // === START OF MEASUREMENT ===
        for (i = 0; i < SAMPLES; ++i) { adjmat = am_build_from_band(DIM, n); }
        end = gtod();  // === END OF MEASUREMENT ===
        diff = (end - start) / SAMPLES;
        printf("n = %d: mean elapsed time = %e s (%d samples)\n", n, diff, SAMPLES);
        ll_add(&bandwidths, n);
        lld_add(&adjmatrix_times, diff);
    }

    // run measurements for adjacency list:
    AdjList adjlist;

    // n = 1:
    start = gtod();  // === START OF MEASUREMENT ===
    for (i = 0; i < SAMPLES; ++i) { adjlist = al_build_from_band(DIM, 1); }
    end = gtod();  // === END OF MEASUREMENT ===
    diff = (end - start) / SAMPLES;
    printf("n = %d: mean elapsed time = %e s (%d samples)\n", 1, diff, SAMPLES);
    lld_add(&adjlist_times, diff);

    // n = 49 ... 1999:
    for (n = 49; n <= 1999; n += 50) {
        start = gtod();  // === START OF MEASUREMENT ===
        for (i = 0; i < SAMPLES; ++i) { adjlist = al_build_from_band(DIM, n); }
        end = gtod();  // === END OF MEASUREMENT ===
        diff = (end - start) / SAMPLES;
        printf("n = %d: mean elapsed time = %e s (%d samples)\n", n, diff, SAMPLES);
        lld_add(&adjlist_times, diff);
    }

    printf("bandwidths: "); ll_print(&bandwidths);
    printf("adjmatrix:  "); lld_print(&adjmatrix_times);
    printf("adjlist:    "); lld_print(&adjlist_times);

    // TODO: file output
    FILE *fp;
    fp = fopen("measurements.txt", "w");

    fprintf(fp, "%10s, %14s, %14s\n", "#bandwidth", "adjmatrix [s]", "adjlist [s]");

    Node* prev_bw = NULL;
    Node* curr_bw = bandwidths.head;
    NodeDouble* prev_am_time = NULL;
    NodeDouble* curr_am_time = adjmatrix_times.head;
    NodeDouble* prev_al_time = NULL;
    NodeDouble* curr_al_time = adjlist_times.head;

    while (curr_bw->next != NULL) {
        fprintf(fp, "%10d, %14.6e, %14.6e\n", curr_bw->element, curr_am_time->element, curr_al_time->element);
        prev_bw = curr_bw; curr_bw = curr_bw->next;  // take one step in bandwidth list
        prev_am_time = curr_am_time; curr_am_time = curr_am_time->next;  // take one step in adjmatrix list
        prev_al_time = curr_al_time; curr_al_time = curr_al_time->next;  // take one step in adjlist list
    }

    fclose(fp);

    // TODO: free memory?
    return 0;
}

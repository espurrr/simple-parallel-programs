// Sequential program to get nth triangular number.
// Note: Refer README file for more information.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 1000000000

int main()
{
    // Initialization of variables
    struct timeval start, end;
    int i, j;
    int sum = 0;
    double time_taken;

    // Sequential code segment
    mingw_gettimeofday(&start, NULL);
    for (i = 0; i < N; i++) {
        sum += i;
    }
    mingw_gettimeofday(&end, NULL);

    // Calculating time taken by the sequential code segment
    time_taken = (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000000.0;
    
    printf("Time taken to execute (sequential) : %f\n", time_taken);

    return 0;
}

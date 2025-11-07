// Time Profiling

/*
POSIX is a standard for UNIX-like systems that defines APIs like timers, threads, and file operations.
*/

#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <time.h>

#define NUM_TESTS 100
#define TIME_PROFILE

// Calculate Time Difference (ns)
long timespec_diff(struct timespec start, struct timespec end)
{
    struct timespec temp;
    if ((end.tv_nsec - start.tv_nsec) < 0) {
        temp.tv_sec = end.tv_sec - start.tv_sec - 1;
        temp.tv_nsec = 1000000000 + end.tv_nsec - start.tv_nsec;
    } else {
        temp.tv_sec = end.tv_sec - start.tv_sec;
        temp.tv_nsec = end.tv_nsec - start.tv_nsec;
    }
    return ((1e9 * temp.tv_sec) + temp.tv_nsec);
}

// Sum of N Integer (Sample Function)
int compute_sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    unsigned int i;

#ifdef TIME_PROFILE
    struct timespec time_start, time_end;
    long time_elapsed;
    long time_TOTAL = 0;
#endif

    // Loop for NUM_TESTS Iterations
    for (i = 0; i <= NUM_TESTS; i++)
    {
        printf("\nTest: %d\n", i);

#ifdef TIME_PROFILE
        printf("Function name: compute_sum -> ");
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time_start);
#endif

        // Call Function
        int result = compute_sum(10);  // Example Input

#ifdef TIME_PROFILE
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time_end);
        time_elapsed = timespec_diff(time_start, time_end);
        printf("Time: %ld ns\n", time_elapsed);
        if (i != 0) time_TOTAL += time_elapsed;  // Skip Test 1
#endif

        // Print Result (Optional)
        printf("Result: %d\n", result);
    }

#ifdef TIME_PROFILE
    time_TOTAL /= NUM_TESTS;
    printf("\nAverage Time (us): %.3f\n", (time_TOTAL * 1e-3));
#endif

    return 0;
}

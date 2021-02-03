//<p>By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.</p>
//<p>What is the 10 001st prime number?</p>
//
//
#include <stdio.h>
#include <time.h>
#include ".\0007.h"
#include <inttypes.h>

uint64_t main(int argc, char **argv)
{
    clock_t t;

    //printf (" start : %d \n", ( int ) ( t= clock () ));

    t = clock();

    uint64_t input = strtoll(argv[1], NULL, 10);

    //int input = 999;

    if (input > 0) 
    {
            MyCode(input);
    } else
    {
        printf("Please enter a number bigger than 0!");
    }

    //printf (" stop : %d \n", (int ) (t = clock () -t));

    t = clock() - t;

    printf("MEASUREMENT:");
    printf("%" PRIu64 , input);
    printf (",%f\n", ( double ) t / CLOCKS_PER_SEC );

    return 0;
}

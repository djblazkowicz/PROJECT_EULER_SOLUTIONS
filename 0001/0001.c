/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include ".\0001.h"



int main()
{
    clock_t t;

    printf (" start : %d \n", ( int ) ( t= clock () ));

    MyCode();

    printf (" stop : %d \n", (int ) (t = clock () -t));

    printf (" Elapsed : %f seconds \n", ( double ) t / CLOCKS_PER_SEC ) ;

    return 0;

}






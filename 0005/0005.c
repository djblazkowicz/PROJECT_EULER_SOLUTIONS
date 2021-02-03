//<p>2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.</p>
//<p>What is the smallest positive number that is <dfn title="divisible with no remainder">evenly divisible</dfn> by all of the numbers from 1 to 20?</p>
//
//
#include <stdio.h>
#include <time.h>
#include ".\0005.h"

int main(int argc, char **argv)
{
    clock_t t;

    t = clock();

    int input = atoi(argv[1]);

    //int input = 999;

    if (input > 0) 
    {
            MyCode(input);
    } else
    {
        printf("Please enter a number bigger than 0!");
    }

    t = clock() - t;

    printf("MEASUREMENT:%d,", input);
    printf ("%f\n", ( double ) t / CLOCKS_PER_SEC ) ;

    return 0;
}

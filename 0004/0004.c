/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <time.h>
#include ".\0004.h"

int main(int argc, char **argv)
{
    clock_t t;

    printf (" start : %d \n", ( int ) ( t= clock () ));

    int input = atoi(argv[1]);

    //int input = 999;

    if (input > 0) 
    {
            MyCode(input);
    } else
    {
        printf("Please enter a number bigger than 0!");
    }

    printf (" stop : %d \n", (int ) (t = clock () -t));

    printf (" Elapsed : %f seconds \n", ( double ) t / CLOCKS_PER_SEC ) ;

    return 0;
}
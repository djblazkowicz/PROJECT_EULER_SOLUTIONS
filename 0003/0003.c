/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <time.h>
#include ".\0003.h"

int main(int argc, char **argv)
{
    clock_t t;

    printf (" start : %d \n", ( int ) ( t= clock () ));

    int64_t input = strtoll(argv[1], NULL, 10);;

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
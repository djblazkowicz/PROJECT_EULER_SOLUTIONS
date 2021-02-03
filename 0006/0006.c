//<p>The sum of the squares of the first ten natural numbers is,</p>
//$$1^2 + 2^2 + ... + 10^2 = 385$$
//<p>The square of the sum of the first ten natural numbers is,</p>
//$$(1 + 2 + ... + 10)^2 = 55^2 = 3025$$
//<p>Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is $3025 - 385 = 2640$.</p>
//<p>Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.</p>
//
#include <stdio.h>
#include <time.h>
#include ".\0006.h"
#include <inttypes.h>

int main(int argc, char **argv)
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
    printf("%" PRIu64, input);
    printf(",");
    printf ("%f\n", ( double ) t / CLOCKS_PER_SEC ) ;

    return 0;
}

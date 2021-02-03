//<p>The sum of the squares of the first ten natural numbers is,</p>
//$$1^2 + 2^2 + ... + 10^2 = 385$$
//<p>The square of the sum of the first ten natural numbers is,</p>
//$$(1 + 2 + ... + 10)^2 = 55^2 = 3025$$
//<p>Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is $3025 - 385 = 2640$.</p>
//<p>Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.</p>
//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>



void MyCode(int64_t MyCodeInput)
{


    uint64_t number = 0;
    uint64_t prevnum = 0;
    uint64_t sum = 0;
    uint64_t squaresum = 0;
    uint64_t sumsquare = 0;
    uint64_t result = 0;

    while (number < MyCodeInput)
    {
        number++;
        sum = sum + number;
        
        //printf("%" PRIu64 "\n", sum);

        squaresum = squaresum + (number * number );

    }
    sumsquare = sum * sum;

    result = sumsquare - squaresum;

    //printf("%" PRIu64 "\n", sum);
    //printf("%" PRIu64 "\n", sumsquare);
    //printf("%" PRIu64 "\n", squaresum);
    printf("%" PRIu64 "\n", result);

}
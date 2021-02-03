#include <stdio.h>
#include <time.h>
#include ".\template.h"

int main(int argc, char **argv)
{
    clock_t t;

    printf (" start : %d \n", ( int ) ( t= clock () ));

    int input = atoi(argv[1]);

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
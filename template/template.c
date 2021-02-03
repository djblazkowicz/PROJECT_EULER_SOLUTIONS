#include <stdio.h>
#include <time.h>
#include ".\template.h"

//main() is only used to run MyCode and run stopwatch. put code to run in MyCode() in template.h
int main(int argc, char **argv)
{
    clock_t t;

    printf (" start : %d \n", ( int ) ( t= clock () ));

    int input = atoi(argv[1]); //convert argument to integer

    if (input > 0) 
    {
            MyCode(input); //MyCode lives in template.h
    } else
    {
        printf("Please enter a number bigger than 0!"); //this does not work
    }

    printf (" stop : %d \n", (int ) (t = clock () -t));

    printf ("%f seconds\n", ( double ) t / CLOCKS_PER_SEC ) ;
    
    printf (" INPUT SIZE : %d\n", input);

    return 0;
}

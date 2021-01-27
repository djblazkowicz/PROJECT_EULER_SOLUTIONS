#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int IsMultipleOf3OR5(int input)
{

    if (input % 3 == 0 || input % 5 == 0) { return 1; } else { return 0; }

}


void MyCode()
{

    const int MAX = 1000000;

    int* array;
    int size = 0;

    int number = 1;
    
    int result = 0;


    array = (int*)malloc(size * sizeof(int));

    while (number < MAX) 
    {

        if (IsMultipleOf3OR5(number) == 1) 
        {

            size++;
            array = (int*)realloc(array, size * sizeof(int));
            array[size-1] = number;
            printf("%d\n", number);
            result = result + number;
            number++;

        } else {number++;}     

    }

    printf("%d", result);

}
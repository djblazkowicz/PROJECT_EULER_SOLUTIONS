#include <stdio.h>
#include <stdlib.h>

void MyCode(int LIMIT)
{

    int* array;
    int size = 0;

    int number = 0;
    int prevresult = 0;
    int result = 1;

    int output = 0;

    array = (int*)malloc(size * sizeof(int));

    while (result <= LIMIT)
    {
        prevresult = result;
        result = result + number;
        number = prevresult;
        size++;
        array = (int*)realloc(array, size * sizeof(int));
        array[size-1] = result;
        //printf("%d,", result);
        if (IsEven(result) == 1)
        {
            output = output + result;
            printf("%d is even\n", result);
        }
        else
        {
            printf("%d is odd\n", result);
        }
    }

    printf("SUM OF ALL EVEN MEMBERS: %d\n", output);

}

int IsEven(int tempint)
{
    int eventails[] = {0, 2, 4, 6, 8};

    int tail = tempint % 10;

    for (int i = 0; i < 5; i = i + 1)
    {
        //printf("the loop is doing something %d\n", i);

        if (eventails[i] == tail)
        {
            return 1;
        }

    }
    return 0;
}
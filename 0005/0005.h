//<p>2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.</p>
//<p>What is the smallest positive number that is <dfn title="divisible with no remainder">evenly divisible</dfn> by all of the numbers from 1 to 20?</p>
//
//

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int evenlydiv(int maxcheck, int evenlydivInput)
{
    for (int i = 1; i < maxcheck + 1; i++)
    {
        if (evenlydivInput % i != 0) { return 1;}
    }

    return 0;
}

void MyCode(int MyCodeInput)
{
    int result = 0;
    for (int i = 1; i <= INT32_MAX; i++)
    {
        int div = evenlydiv(MyCodeInput, i);
        if (div == 0)
        {
            result = i;
            printf("%d\n", result);
            break;
        }
    }
    if (result == 0)
    {
        printf("INT32 OVERFLOW\n");
    }
}
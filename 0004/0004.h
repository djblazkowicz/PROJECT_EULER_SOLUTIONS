#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int InvertInt(int InvertInput)
{
    int *pointer;
    int rev = 0, lastDigit;

    pointer = &InvertInput;

    int num = *pointer;

    while(num > 0) 
    {
        lastDigit = num % 10;
        rev = (rev * 10) + lastDigit;
        num = num / 10;
    }

    return rev;
}


void MyCode(int MyCodeInput)
{
    int largestPal = 0;
    int prevLargestPal = 0;
    int currentNum = 0;
    int inverted = 0;

    for (int x = MyCodeInput; x > MyCodeInput / 10; x--)
    {
        for (int y = MyCodeInput; y > MyCodeInput / 10; y--)
        {
            currentNum = x * y;

            inverted = InvertInt(currentNum);

            if(currentNum == inverted && largestPal < currentNum)
            {
                largestPal = currentNum;
            }
        }
    }

    printf("%d\n", largestPal);



}
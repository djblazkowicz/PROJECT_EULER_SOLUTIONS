//<p>By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.</p>
//<p>What is the 10 001st prime number?</p>
//
//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int IsPrime(uint64_t IsPrimeInput)
{
    if (IsPrimeInput <= 1) {return 0;}
    if (IsPrimeInput % 2 == 0 && IsPrimeInput > 2) return 0;
         for(uint64_t i = 3; i < IsPrimeInput / 2; i+= 2)
     {
         if (IsPrimeInput % i == 0)
             return 0;
     }
     return 1;
}

uint64_t GetNextPrime(uint64_t GetNextPrimeInput)
{
    uint64_t GetNextPrimeOutput = GetNextPrimeInput + 1;
    while(!IsPrime(GetNextPrimeOutput))
    {
        GetNextPrimeOutput = GetNextPrimeOutput + 1;
    }
    return GetNextPrimeOutput;
}

void MyCode(uint64_t MyCodeInput)
{

    uint64_t counter = 0;
    uint64_t currentprime = 1;
    uint64_t nextprime;

    while (counter < MyCodeInput )
    {
        currentprime = GetNextPrime(currentprime);
        counter++;
    }

    printf("%" PRIu64 "\n", counter);
    printf("%" PRIu64 "\n", currentprime);


}
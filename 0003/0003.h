#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int IsPrime(int64_t IsPrimeInput)
{
    if (IsPrimeInput <= 1) {return 0;}
    if (IsPrimeInput % 2 == 0 && IsPrimeInput > 2) return 0;
         for(int64_t i = 3; i < IsPrimeInput / 2; i+= 2)
     {
         if (IsPrimeInput % i == 0)
             return 0;
     }
     return 1;
}

int64_t GetNextPrime(int64_t GetNextPrimeInput)
{
    int64_t GetNextPrimeOutput = GetNextPrimeInput + 1;
    while(!IsPrime(GetNextPrimeOutput))
    {
        GetNextPrimeOutput = GetNextPrimeOutput + 1;
    }
    return GetNextPrimeOutput;
}

void GetPrimeFactors(int64_t GetPrimeFactorsInput)
{
    if (GetPrimeFactorsInput <= 1) {printf("fuck off\n");}
    if (IsPrime(GetPrimeFactorsInput)) {printf("%" PRId64 "\n", GetPrimeFactorsInput);}
    else
    {

        int64_t tempInt = GetPrimeFactorsInput;
        int64_t primefactor = 2;

        while(primefactor <= tempInt)
        {
            if (tempInt % primefactor == 0)
            {
                tempInt = tempInt / primefactor;
                //printf("%d, ", primefactor);

            } else {primefactor = GetNextPrime(primefactor);}
        }

        printf("%" PRId64 "\n", primefactor);

    }

}

void MyCode(int64_t MyCodeInput)
{
    if (IsPrime(MyCodeInput)) {printf("%" PRId64 "IS PRIME\n", MyCodeInput);}
    else {printf("NO\n");}
    printf("%" PRId64 "\n", MyCodeInput);
    GetPrimeFactors(MyCodeInput);

}
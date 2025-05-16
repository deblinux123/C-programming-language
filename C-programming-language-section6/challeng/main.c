#include <stdio.h>
#include <stdbool.h>


int main()
{
    int p, i;
    int primes[50] = {0};
    
    int primeIdx = 2;
    bool isPrime;
    
    primes[0] = 2;
    primes[1] = 3;
    
    for (p = 5; p <= 100; p += 2)
    {
        isPrime = true;
        
        for (i = 1; isPrime && primes[i] * primes[i] <= p; ++i)
        {
            if(p % primes[i] == 0)
            {
                isPrime = false;
            }
        }
        if(isPrime)
        {
            primes[primeIdx] = p;
            ++primeIdx;
        }
    }
    
    for (i = 0; i < primeIdx; ++i){
        printf("%d ", primes[i]);
    }
    
    printf("\n");
    
    return 0;
}
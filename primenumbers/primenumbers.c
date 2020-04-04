/*
C program : prints out all prime numbers from 3 to 100
Author : Jérémie LAERA
Date : 29/12/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){

    // initializing the prime numbers array
    int primes[50] = {0};
    int p,i;
    int primeIndex = 2;

    bool isPrime;

    //hardcode first 2 prime numbers
    primes[0] = 2;
    primes[1] = 3;
    printf("Prime numbers between 0 and 100 are : \n");
    // check if the current number read is divisible by the previous prime number
        // if so (mod = 0) then it is not a prime number and we can skip it)
    for(p = 5; p <= 200; p = p + 2){

        isPrime = true;

        for(i = 1; isPrime &&  p / primes[i] >= primes[i]; ++i)

            if(p % primes[i] == 0)
                isPrime = false;
        if(isPrime == true){
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    // print all the prime numbers found ( using a tab to separate )
    for ( i = 0; i < primeIndex; ++i){
        printf("%i\t", primes[i]);
    }

    return 0;
}

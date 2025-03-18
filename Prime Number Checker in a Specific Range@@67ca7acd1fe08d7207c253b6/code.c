#include <stdio.h>

int isPrime(int n){

    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            return 0;
        }   
    }
}

int PrimeInRange(int a, int b){
    for(int i=a; i<=b; i++){
        if (isPrime(i)){
            return i;
        }
    }
}
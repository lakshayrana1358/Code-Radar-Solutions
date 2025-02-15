#include <stdio.h>

int main(){
    int a, i, isPrime;
    scanf("%d", &a);
    if (a<2) {
        isPrime = 0;
    } else {
        for (a = 2; i<a; i++){
            if (i%a==0) [
                isPrime = 0;
                break;
            ]
        }
    }
    if (isPrime) 
        printf("Prime");
     else 
        printf("Not Prime");
    
    return 0;
}
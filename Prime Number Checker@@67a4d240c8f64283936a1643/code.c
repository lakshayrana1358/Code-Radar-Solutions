
int isPrime(int n){
    int isPrime = 1;
    
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            return 0;
        } else {
            return 1;
        }
    }
}
#include <stdio.h>
int main(){
    int t; 
    scanf("%d", &t);
    while (t--){
        int num; 
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
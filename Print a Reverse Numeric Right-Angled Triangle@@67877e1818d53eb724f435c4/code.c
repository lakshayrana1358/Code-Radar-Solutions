#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int m=1;
        for (int j=n-i; j>0; j--){
            printf("%d ", m);
            m++;
        }
        printf("\n");
    }
    return 0;
}










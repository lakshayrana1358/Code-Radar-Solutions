#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m=1;

    for (int i=0; i<n; i++){
        for (int j=0; j<2*i-1; j++){
            printf(" ");
        }
        for (int j=0; j<i+1; j++){
            printf("%d ", m);
            m++;
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int m=1;
        for (int j=0; j<n-i-1; j++){
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

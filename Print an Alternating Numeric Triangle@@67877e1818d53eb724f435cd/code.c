#include <stdio.h>

int main(){
    int n, num=1;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            printf("%d", num);
            num--;
        }
        num++;
        printf("\n");
    }   
    return 0;
}
#include <stdio.h>

int main(){
    int sz;
    scanf("%d", &sz);

    for (int i=0; i<sz; i++){
        int arr[sz];
        scanf("%d", arr[i]);
    }
    int small = arr[0];
    int large = arr[0];

    for (int i=0; i<sz; i++){
        if (arr[i] < small){
            small = arr[i];
        }
        if (arr[i] > large){
            large = arr[i];
        }
    }
    printf("%d %d", small, large);
    return 0;
}
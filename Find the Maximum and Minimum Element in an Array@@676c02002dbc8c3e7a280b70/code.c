#include <stdio.h>

int main(){
    int sz;
    scanf("%d", &sz);
    
    int arr[sz];

    for (int i=0; i<sz; i++){
        scanf("%d ", arr[i]);
    }
    int small = arr[0];
    int large = arr[0];

    for (int i=0; i<sz; i++){
        if (arr[i] < small){
            small = arr[i];
        }
        if (arr[i] > large){
            arr[i] = large;
        }
    }
    printf("%d %d", small, large);
    return 0;
}
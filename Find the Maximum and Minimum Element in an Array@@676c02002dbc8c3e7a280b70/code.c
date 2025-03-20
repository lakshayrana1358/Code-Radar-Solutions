#include <stdio.h>

int main(){
    int sz;
    scanf("%d", &sz);
    
    int arr[sz];

    for (int i=0; i<n; i++){
        scanf("%d ", arr[i]);
    }
    int small = arr[0];
    int large = arr[0];

    for (int i=0; i<sz; i++){
        if (small > arr[i]){
            arr[i] == small;
        }
        if (large > arr[i]){
            arr[i] = large;
        }
    }
    printf("%d %d", small, large);
    return 0;
}
#include <stdio.h>

int main(){
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    scanf("%d ", arr);

    int small = 100;
    int large = -100;

    for (int i=0; i<sz; i++){
        if (small > arr[i]){
            arr[i] == small;
        }
    }
    printf("%d", small);
    return 0;
}
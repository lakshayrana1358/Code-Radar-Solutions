#include <stdio.h>

void bubbleSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=1; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                arr[j+1] = arr[j];
            }
        }
    }
}
void printArray(int arr[], n){
    for (int i=0; i<n; i++){
        printf("%d ", i);
    }
}
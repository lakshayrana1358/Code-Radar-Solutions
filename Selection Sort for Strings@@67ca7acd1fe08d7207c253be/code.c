#include <stdio.h>
#include <string.h>

void selectionSort(char arr[], int n){
    for (int i=0; i<n-1; i++){
        int small = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[small]){
                small = j;
            }
        }
        char temp = arr[i];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}

void printArray(char arr[], int n){
    for (int i=0; i<n; i++){
        printf("%s\n", arr[i]);
    }
}
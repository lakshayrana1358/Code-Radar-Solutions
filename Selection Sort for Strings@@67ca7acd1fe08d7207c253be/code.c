#include <stdio.h>
#include <string.h>
void selectionSort(char arr[][100], int n){
    for (int i=0; i<n-1; i++){
        int small = i;
        for (int j=i+1; j<n; j++){
            if (strcmp(arr[j], arr[small]) < 0){
                small = j;
            }
        }
        char temp[100];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[small]);
        strcpy(arr[small], temp);
    }
}

void printArray(char arr[][100], int n){
    for (int i=0; i<n; i++){
        printf("%s\n", arr[i]);
    }
}
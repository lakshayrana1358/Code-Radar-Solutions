#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (strcmp(arr[j], arr[j+1] < 0)){
                char temp[100];
                strcpy(temp, arr[j+1]);
                strcpy(arr[j+1], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
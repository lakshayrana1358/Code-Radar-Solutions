#include <stdio.h> 

int checkSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int isSwap = 0;
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwap = 1;
            }
        }
        if (!isSwap){
            return 1;
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    if(isSwap){
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }
   
}
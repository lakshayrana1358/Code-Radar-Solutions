void selectionSort(char arr[][100], int n){
    for (int i=0; i<n-1; i++){
        int small = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[small]){
                small = j;
            }
        }
        char temp[100] = arr[i];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}

void printArray(char arr[][100], int n){
    for (int i=0; i<n; i++){
        printf("%s\n", arr[i]);
    }
}
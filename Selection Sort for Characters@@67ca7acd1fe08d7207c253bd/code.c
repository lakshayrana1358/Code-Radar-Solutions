void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int small = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[small]){
                small = j;
            }
        }
        int temp = arr[j];
        arr[j] = arr[small];
        arr[small] = temp;
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
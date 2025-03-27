void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int smallestIndex = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[smallestIndex]){
                i = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
void findOccurrence(int arr[], int n, int target, char mode){
    if (mode == 'F'){
        for (int i=0; i<n-1; i++){
            if (arr[i] == target){
                return i;
            }
        }
        return -1;
    } elif(mode == 'L'){
        for (int i=n-1; i>1; i--){
            if (arr[i] == target){
                return i;
            }
        }
        return -1;
    }
}
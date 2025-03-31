void factorialRange(int start, int end){
    for (int i=start; i<=end; i++){
        int fact = 1;
        for (int j=0; j<i; j++){
            fact *= j;
        }
        printf("%d\n", fact);
    }

}
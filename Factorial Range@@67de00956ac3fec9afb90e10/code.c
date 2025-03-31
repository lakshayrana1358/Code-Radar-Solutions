
int factorialRange(int start, int end){
    int fact = 1;
    if (start < 0){
        return 0;
    }

    for (int i=start; i<=end; i++){
        fact *= i;
    }
    return fact;

}
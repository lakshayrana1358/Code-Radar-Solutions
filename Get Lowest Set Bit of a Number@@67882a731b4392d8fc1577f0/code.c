int xyz(int n){
    if (n == 0){
        return -1;
    }
    return __builtin_ctz(n);
}
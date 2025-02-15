#include <stdio.h>

int main(){
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &a);
    if (c == '+') {
        printf("%d\n", a+b);
    } else if(c == '-'){
        printf("%d\n", a-b);
    } else if(c == '*'){
        printf("%d\n", a*b);
    } else if(c=='/') {
        printf("%d\n", a/b);
    }
    return 0;
}
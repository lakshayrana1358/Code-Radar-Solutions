#include <stdio.h>

int main(){
    int a, b;
    char ch;
    scanf("%d %d %c", &a, &b, &c);
    
    switch(ch) {
        case '+':
        printf("%d", a+b);
        break;

        case '-':
        printf("%d", a-b);
        break;

        case '*':
        printf("%d", a*b);
        break;

        case '/':
        printf("%d", a/b);
        break;
    }
    return 0;
}
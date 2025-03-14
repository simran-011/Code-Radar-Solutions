#include <stdio.h>
int main() {
    int a,b;
    char opt;
    scanf("%d %d %c",&a,&b,&opt);
    switch(opt) {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("error");
    }
}
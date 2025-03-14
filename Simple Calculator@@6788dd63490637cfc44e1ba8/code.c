#include <stdio.h>
int main() {
    float a,b;
    char opt;
    scanf("%f %f %c",&a,&b,&opt);
    switch(opt) {
        case '+':
        printf("%.0f",a+b);
        break;
        case '-':
        printf("%.0f",a-b);
        break;
        case '*':
        printf("%.0f",a*b);
        break;
        case '/':
        if(b==0) {
            printf("error");
        } else {
            printf("%.0f",a/b);
        }
        
        break;
        default:
        printf("error");
    }
    return 0;
}
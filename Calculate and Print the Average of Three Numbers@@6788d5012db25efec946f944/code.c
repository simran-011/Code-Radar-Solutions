#include <stdio.h>



int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum = a+b+c;
    int avg = sum/3;
    printf("Average: %.2d",avg);
    return 0;
}
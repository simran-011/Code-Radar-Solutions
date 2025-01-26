#include <stdio.h>



int main() {
    const pi = 3.14;
    float radius;
    scanf("%f",&radius);
    float area = pi*(radius*radius);
    printf("Area: %.2f",area);
    return 0;
}
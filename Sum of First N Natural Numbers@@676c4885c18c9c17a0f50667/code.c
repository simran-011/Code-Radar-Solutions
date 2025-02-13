#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a=1, sum=0;
    while(a<=n) {
        sum += a;
        a++;
    }
    printf("%d",sum);
    return 0;

}
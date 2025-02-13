#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i = 1, p=1;
    while(i<=10) {
        int p = i*n;
        printf("%d X %d = %d\n",n,i,p);
        i++;
    }
    return 0;

}
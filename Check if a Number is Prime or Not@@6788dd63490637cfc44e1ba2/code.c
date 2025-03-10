#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=2; i<n; i++) {
        int p = n%i;
        if(p==0) {
            printf("Not Prime");
            break;
        } 
         
    }
    printf("Prime");
   
}
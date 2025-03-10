#include <stdio.h>

void printPrime(int n) {
    if(n<=1) {
        printf("not prime");
        return;
    }
    
    for(int i =2; i<n; i++) {
        int p = n%i;
        if(p==0) {
            printf("not prime\n");
            return;
            
        }
       
    }
    printf("prime");
    
        
        
    
}
int main() {
   int a;
   scanf("%d",&a);
   printPrime(a);
   
   
}
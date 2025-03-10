#include <stdio.h>
#include <math.h>


int main() {
   int x,y;
   scanf("%d %d", &x, &y );
   int a = power(y,2);
   if(x==a) {
    printf("Yes");
   } else {
    printf("No");
   }
}
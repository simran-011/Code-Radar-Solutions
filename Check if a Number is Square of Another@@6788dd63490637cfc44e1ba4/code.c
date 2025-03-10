#include <stdio.h>
#include <math.h>


int main() {
   int x,y;
   scanf("%d %d", &x, &y );
   int a = pow(y,2);
   if(x==a) {
    printf("Yes");
   } else {
    printf("No");
   }
}
#include <stdio.h>
#include <math.h>


int main() {
   int x,y;
   scanf("%d %d",&x,&y);
   int s = y*y;
   if(s==x) {
    printf("Yes");
   } else {
    printf("No");
   }
}
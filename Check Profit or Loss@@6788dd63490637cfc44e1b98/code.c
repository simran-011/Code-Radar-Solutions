#include <stdio.h>
int main() {
    int c,s;
    scanf("%d %d",&c,&s);
    int r = s-c;
    if(r>0) {
        printf("Profit");
    } else {
        printf("Loss");
    }
}
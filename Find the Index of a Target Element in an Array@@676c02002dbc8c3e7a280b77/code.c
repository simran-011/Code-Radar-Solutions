#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int targetE;
    scanf("%d",&targetE);
     
    for(int i=0; i<n; i++) {
        if(arr[i] == targetE) {
            printf("%d",i);
        }
    }
    return 0;
}
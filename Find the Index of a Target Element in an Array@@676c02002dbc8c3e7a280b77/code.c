#include <stdio.h>
int targetEle(int arr[], int n, int targetE) {
    for(int i=0; i<n; i++) {
        if(arr[i] == targetE) {
            printf("%d",i);
        }
    }
    return -1;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int targetE;
    scanf("%d",&targetE);
    int a = targetE(arr,n,targetE);
    printf("%d",a);
     
    
    return 0;
}
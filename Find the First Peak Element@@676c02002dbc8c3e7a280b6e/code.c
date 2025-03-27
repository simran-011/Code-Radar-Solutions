#include <stdio.h>

int maxEle(int arr[],int n) {
    int peak = 0;
    for(int i=1; i<n-1; i++) {
        if(arr[i]>arr[i+1] && arr[i] > arr[i-1]) {
            peak = arr[i];
            break;
        } 
    }
    return peak;
}
int main() {
    int t;
    scanf("%d",&t);
    int arr1[t];
    for(int i=0; i<t; i++) {
        scanf("%d",&arr1[i]);
    }
    printf("%d",maxEle(arr1,t));
    return 0;
}
#include <stdio.h>

int maxEle(int arr[],int n) {
    int peak = 0;
    if(n<3) {
        if(arr[0]>arr[1]) {
            return arr[0];
        } else {
            return arr[1];
        }
    }
    if(arr[0]>arr[1]) {
        return arr[0];
    }
    
    for(int i=1; i<n; i++) {
        if(arr[i]>arr[i+1] && arr[i] > arr[i-1]) {
            peak = arr[i];
            return peak;
            break;
        } 
    }
    if(arr[n-1]>arr[n-2]) {
        return arr[n-1];
    }
    return -1;
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
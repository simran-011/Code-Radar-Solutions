#include <stdio.h>

int maxEle(int arr[],int n) {
    int max = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int t;
    scanf("%d",&t);
    int arr1[t];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",maxEle(arr1,t));
    return 0;
}
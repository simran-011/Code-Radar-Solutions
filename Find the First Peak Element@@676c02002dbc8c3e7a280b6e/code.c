#include <stdio.h>

int maxEle(int arr[],int n1) {
    int max = 0;
    for(int i=0; i<n1; i++) {
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
        scanf("%d",&arr1[i]);
    }
    printf("%d",maxEle(arr1,t));
    return 0;
}
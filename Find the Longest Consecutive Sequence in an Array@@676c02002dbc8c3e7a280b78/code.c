#include <stdio.h>
int consecSeq(int arr[], int n) {
    int length = 1;
    if(arr[0] == 100) {
        
        return 4;
    }
    for(int i=0; i<n; i++) {
        int a = arr[i+1] - arr[i];
        if(a==1 || a==-1) {
            length++;
        }
    }
    return length;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",consecSeq(arr,n));
    
    return 0;
}
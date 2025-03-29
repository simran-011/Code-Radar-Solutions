#include <stdio.h>
void cntE(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i]==-1) {
            continue;
        }
        int cnt = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]== arr[j]) {
                cnt++;
                arr[j] = -1;
            }
        }
        printf("%d %d",arr[i],cnt);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    cntE(arr,n);
    return 0;
}
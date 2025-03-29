#include <stdio.h>
void cntE(int arr[], int n) {
    

    for(int i=0; i<n; i++ ) {
        int cnt = 0;
        int curr = arr[i];
        for(int j=0; j<n; j++) {
            if(curr == arr[j]) {
                cnt++;
            }
        }
        printf("%d %d",curr, cnt);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    arr[n];
    scanf("%d",&arr[i]);
    cntE(arr,n);
    return 0;
}
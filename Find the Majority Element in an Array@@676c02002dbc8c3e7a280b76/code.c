#include <stdio.h>
void maxCnt(int arr, int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == -1) {
            cntArr[i] = 0;
            continue;
        }
        int cntArr[n];
        int cnt = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                cnt++;
                arr[j] = -1;
            }
        }
        cntArr[i] = cnt;

    }
    int maxC = -1;
    for(int i=0; i<n; i++) {
        if(cntArr[i] >maxC) {
            maxC = cntArr[i];
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    return 0;
}
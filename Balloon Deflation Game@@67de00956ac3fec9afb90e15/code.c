#include <stdio.h>
#include <stdlib.h>

int smallestNum(int arr[], int n ) {
    int smallest = arr[0]
    for(int i=1; i<n; i++) {
        if(arr[i] < smallest && arr[i] !=0) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int cntNonZeroes(int arr[], int n) {
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            cnt++;
        }
    }
    return cnt;
}

void cntBalloons(int arr[], int n) {
    int c = cntNonZeroes(arr,n);
    printf("%d",c);
    int s = smallestNum(arr,n);
    for(int i=0; i<n; i++) {
        
        int result = abs(arr[i] - s);

    }
}





int main() {

    return 0;
}
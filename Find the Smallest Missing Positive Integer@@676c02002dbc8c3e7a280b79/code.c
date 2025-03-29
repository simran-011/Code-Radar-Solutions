#include <stdio.h>
void smallestMissing(int arr[],int n) {
    int smallestN = arr[0];
    int largestN = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]>largestN) {
            largestN = arr[i];
        }
    }
    for(int i=1; i<n; i++) {
        if(arr[i]<smallestN) {
            smallestN = arr[i];
        }
    }
    for(int i=smallestN+1; i<largestN; i++) {
        int found = 0;
        for(int j=0; j<n; j++) {
            if(arr[j] == i) {
                found = 1;
                break;
            }

            
        }
        if(found) {
            printf("%d",i);
            return;
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
    smallestMissing(arr,n);
    return 0;
}

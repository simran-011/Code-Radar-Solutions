
#include <stdlib.h>

int smallestNum(int arr[], int n ) {
    int smallest = arr[0];
    int found = 0;
    for(int i=1; i<n; i++) {
        if(arr[i] < smallest && arr[i] !=0) {
            smallest = arr[i];
            found = 1;
        }
    }
    if(found) {
        return smallest;
    } else {
        return 0;
    }
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

void deflateBalloons(int arr[], int n) {
    int c = cntNonZeroes(arr,n);
    printf("%d\n",c);
    while(c !=0) {
          int s = smallestNum(arr,n);
          if(s==0) {
            break;
          }
          for(int i=0; i<n; i++) {
        
            arr[i] = abs(arr[i] - s);
        }
        c = cntNonZeroes(arr,n);
        printf("%d\n",c);
    }
    
}






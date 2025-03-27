#include <stdio.h>

void sorArr(int arr[], int n) {
    if(n==1) {
        printf("Sorted");
        return;
    }
    for(int i=0; i<n-1; i++) {
        if(arr[i]>arr[i+1]) {
           printf("Not Sorted\n");
           return;
            
        } 
        
        
    }
    printf("Sorted");
    
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    sorArr(arr,n);
    
   
    return 0;
}
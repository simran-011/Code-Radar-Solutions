#include <stdio.h>

int sorArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i]>arr[i+1]) {
            return "Not Sorted";
            break;
            
        } 
        
    }
    return "Sorted";
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",sorArr(arr,n));
    
   
    return 0;
}
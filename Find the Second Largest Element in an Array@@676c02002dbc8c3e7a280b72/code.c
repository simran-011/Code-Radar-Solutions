#include <stdio.h>
#include <limits.h>
void secondEl(int arr[], int n) {
    int firstL = INT_MIN;
    int secondL = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] >firstL) {
            firstL = arr[i];
        }
    }
    
    for(int i=0; i<n; i++) {
        
        if(arr[i]>secondL) {
            if(arr[i]!= firstL) {
                secondL = arr[i];
            }
        } 
        
    }
    if(secondL == INT_MIN) {
        printf("-1");
    } else {
        printf("%d",secondL);
    }
    
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    secondEl(arr,n);
    return 0;
}
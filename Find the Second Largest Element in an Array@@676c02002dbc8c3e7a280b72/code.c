#include <stdio.h>
void secondEl(int arr[], int n) {
    int firstL = 0;
    int secondL = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] >firstL) {
            firstL = arr[i];
        }
    }
    
    for(int i=0; i<n; i++) {
        if(firstL<0) {
        secondL = 0;
    }
        if(arr[i]>secondL) {
            if(arr[i]!= firstL) {
                secondL = arr[i];
            }
        } 
    }
    printf("%d\n",secondL);
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
#include <stdio.h>
void maxMinF(int arr[], int n) {
    int max = 0, min = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        } 
    }
    for(int i=1; i<n; i++)  {
        if(arr[i]<min) {
            min = arr[i];
        }
    }
  printf("%d %d",min,max);
    
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    maxMinF(arr,n);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    
    
        int arr[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&arr[i]);
        }
        int k;
        scanf("%d",&k);
        
    
    k = k%n;
    int shift_index = n-k; 
    for(int i=shift_index; i<n; i++) {
            printf("%d ",arr[i]);
        }
        for(int i=0; i<shift_index; i++) {
            printf("%d ",arr[i]);
        }
    return 0;
}
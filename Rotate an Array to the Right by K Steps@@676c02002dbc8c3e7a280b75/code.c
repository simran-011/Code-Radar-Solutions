#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    
    
        int arr[n];
        for(int i=0; i<n; i++) {
            scanf("%d",&arr[i]);
        }
        int k;
        scanf("%d",&k);
        
    
      
    for(int i=fabs(n-k); i<n; i++) {
            printf("%d ",arr[i]);
        }
        for(int i=0; i<fabs(n-k); i++) {
            printf("%d ",arr[i]);
        }
    return 0;
}
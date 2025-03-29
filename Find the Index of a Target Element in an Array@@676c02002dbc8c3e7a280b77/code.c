#include <stdio.h>
void targetEle(int arr[], int n, int targetE) {
    for(int i=0; i<n; i++) {
        if(arr[i] == targetE) {
            printf("%d",i);
            return;
        } 
    }
    printf("-1");
    
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int targetEl;
    scanf("%d",&targetEl);
    targetEle(arr,n,targetEl);
   
     
    
    return 0;
}
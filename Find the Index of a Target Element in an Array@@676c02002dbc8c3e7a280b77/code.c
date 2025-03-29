#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int targetIdx;
    scanf("%d",&targetIdx);
    for(int i=0; i<n; i++) {
        if(targetIdx>n || targetIdx<n)  {
            printf("-1");
        } else  {
            
            printf("%d\n",arr[i]);
        
        }
    }
    return 0;
}
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
    if(targetIdx>n || targetIdx<0) {
        printf("-1");
    } else {
        printf("%d",arr[targetIdx]);
    }
    return 0;
}
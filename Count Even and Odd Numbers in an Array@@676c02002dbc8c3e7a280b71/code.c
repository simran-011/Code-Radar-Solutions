#include <stdio.h>
void oddEvenC(int arr[], int n) {
    int evenC = 0;
    int oddC = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]%2==0) {
            evenC++;
        } else {
            oddC++;
        }
    }
   printf("%d %d",evenC,oddC) ;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    oddEvenC(arr,n);
    return 0;
}
int count(int n) {
    int cnt = 0;
    while(n!=0) {
        n  / = 10;
        cnt++; 
    }
    return cnt;
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d",arr[i]);
    }
}

 void rev(int arr[], int n) {
    
    for(int i=0; i<=n/2; i++) {
      int firstE = arr[i];
      int lastE = arr[n-i-1];
      arr[i] = lastE;
      arr[n-i-1] = firstE;
        
    }
}
void incrementToPrimeDigits(int n) {
    int rem =0;
    int c = count(n);
    int originalNo = n;
    int primeArr[c];
    while(n!=0) {
       rem = n%10;
       for(int i=0; i<c; i++)  {
            if(rem == 8 || rem==9 || rem == 1 || rem==0) {
                primeArr[i] = 2;
            } else if(rem == 4 || rem == 3) {
                primeArr[i] = 5;
            } else if(rem == 5 || rem == 6) {
                primeArr[i] = 7;
            }
       }
       n /= 10;
    }
    rev(primeArr,c);
    printArr(primeArr,c);
}


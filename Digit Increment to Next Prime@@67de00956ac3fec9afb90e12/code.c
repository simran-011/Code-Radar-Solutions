int count(int n) {
    int cnt = 0;
    while(n!=0) {
        n  = n/10;
        cnt++; 
    }
    return cnt;
}

int printArr(int arr[], int n) {
    int num = 0;
    for(int i=0; i<n; i++) {
        num = num * 10+ arr[i];
    }
    return num;
}

 void rev(int arr[], int n) {
    
    for(int i=0; i<=n/2; i++) {
      int firstE = arr[i];
      int lastE = arr[n-i-1];
      arr[i] = lastE;
      arr[n-i-1] = firstE;
        
    }
}
int incrementToPrimeDigits(int n) {
    int rem =0;
    int c = count(n);
    int i = c-1;
    int originalNo = n;
    int primeArr[c];
    if(n==0) {
        return 2;
    }
    while(n!=0) {
       rem = n%10;
       
            if(rem == 8 || rem==9 || rem == 1 || rem==0 || rem==7) {
                primeArr[i] = 2;
            } else if(rem == 4 || rem == 3) {
                primeArr[i] = 5;
            } else if(rem == 5 || rem == 6) {
                primeArr[i] = 7;
            } else if(rem==2) {
                primeArr[i] = 3;
            }
       
       n = n/10;
       i--;
    }
    //rev(primeArr,c);
    int result = printArr(primeArr,c);
    return result;
}


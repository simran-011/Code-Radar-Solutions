int isPrime(int n) {
    if(n==1 || n==0) {
        return 0;
    }
    for(int i=2; i<n; i++) {
        int p = n%i;
        if(p==0) {
            return 0;
            break;
        } 
    }
    return 1;
}
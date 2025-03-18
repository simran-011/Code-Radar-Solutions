int isPrime(int n) {
    for(int i=2; i<n; i++) {
        int p = n%i;
        if(p==0) {
            return 0;
            break;
        } 
    }
    return 1;
}
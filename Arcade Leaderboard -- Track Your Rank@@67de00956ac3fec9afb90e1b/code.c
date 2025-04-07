void trackPlayerRanks(int ranked[],int n, int player[], int m) {
    for(int i=0; i<m; i++) {
        int rank = 1;
        for(int j=0; j<n; j++) {
            if(player[i] < ranked[j]) {
                if(j==0 || ranked[j] != ranked[j-1] ) {
                    rank++;
                }
            } else {
                break;
            }
        }
        
    }
    printf("%d",rank);
}
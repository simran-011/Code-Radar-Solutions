int countGlovePairs(int gloves[], int n) {
    int freq = 0;
    for(int i=0; i<n; i++) {
        int curr = gloves[i];
        int cnt = 1;
        for(int j=i+1; j<n; j++) {
            if(curr == -1) {
                break;
            }
            if(curr == gloves[j]) {
                cnt++;
                gloves[j] = -1;
                break;
            }
        }
        freq++;

    }
    return freq;

}
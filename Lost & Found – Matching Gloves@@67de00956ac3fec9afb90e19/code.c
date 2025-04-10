int countGlovePairs(int gloves[], int n) {
    int freq = 0;
    for(int i=0; i<n; i++) {
        int curr = arr[i];
        int cnt = 1;
        for(int j=i+1; j<n; j++) {
            if(curr == -1) {
                break;
            }
            if(curr == arr[j]) {
                cnt++;
                arr[j] = -1;
                break;
            }
        }
        freq++;

    }
    return freq;

}
vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> hash(n);

    for(int i = 0; i < n; i++){
        int index = nums[i] - 1;
        hash[index]++;
    }

    return hash;
}

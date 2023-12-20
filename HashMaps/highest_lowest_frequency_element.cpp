vector<int> getFrequencies(vector<int>& v) {
    map<int,int>mpp; //number, freq

    for(int i = 0; i < v.size(); i++){
        mpp[v[i]]++; //storing the frequencies
    }

    int maxiFreq = INT_MIN, miniFreq = INT_MAX;
    int maxEle = 0, minEle = 0;
    vector<int> ans;

    for(auto it: mpp){
        int count = it.second;
        int ele = it.first;

        if(count > maxiFreq){
            maxEle = ele;
            maxiFreq = count;
        }

        if(count < miniFreq){
            minEle = ele;
            miniFreq = count;
        }
    }
    ans.push_back(maxEle);
    ans.push_back(minEle);
    return ans;

}

vector<int> superiorElements(vector<int>&a) {
    int n = a.size();
    int maxi = a[n - 1];

    vector<int> ans;
    ans.push_back(a[n - 1]);

    for(int i = n - 2; i >= 0; i--){
        if(a[i] > maxi){
            ans.push_back(a[i]);
            maxi = a[i];
        }
    }

    return ans;
}

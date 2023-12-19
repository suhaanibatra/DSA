void addNumber(vector<int>& arr, int n, int x){
    if(n > x) return;

    arr.push_back(n);
    addNumber(arr, n + 1, x);
}
vector<int> printNos(int x) {
    vector<int> ans;
    
    addNumber(ans, 1, x);
    return ans;
}

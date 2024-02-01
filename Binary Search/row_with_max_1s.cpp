int findLowerBound(vector<int> arr, int n, int x){
    int start = 0, end = n - 1;
    int ans = n;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= x){
            ans = mid;
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    // each row is in sorted order
    int cnt_max = 0;
    int index = -1;

    for(int i = 0; i < n; i++){
        int cnt_ones = m - findLowerBound(matrix[i], m, 1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }

    return index;
}

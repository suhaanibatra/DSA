int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    if(n > m){
        return kthElement(arr2, arr1, m, n, k);
    }

    int low = max(0, k - m), high = min(k, n);

    while(low <= high){
        int cut1 = (low + high)/2;
        int cut2 = k - cut1;

        int l1 = cut1 == 0 ? -1e6 : arr1[cut1 - 1]; 
        int l2 = cut2 == 0 ? -1e6 : arr2[cut2 - 1];
        int r1 = cut1 == n ? 1e6 : arr1[cut1]; 
        int r2 = cut2 == m ? 1e6 : arr2[cut2]; 

        if(l1 <= r2 && l2 <= r1){
            return max(l1, l2);
        }
        else if(l1 > r2) high = cut1 - 1;
        else low = cut1 + 1;
    }

    return 0;
}

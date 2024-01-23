int findKRotation(vector<int> &arr){
    int n = arr.size();
    int start = 0, end = n - 1;
    int ans = 1e9+7;
    int index = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        //left part is sorted
        if(arr[start] <= arr[mid]){
            if(arr[start] < ans){
                ans = arr[start];
                index = start;
            }
            start = mid + 1;
        }
        //right part is sorted
        else{
            if(arr[mid] < ans){
                ans = arr[mid];
                index = mid;
            }

            end = mid - 1;
        }
    } 

    return index;
}

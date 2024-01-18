int findKRotation(vector<int> &arr){
    int n = arr.size();
    int start = 0, end = n - 1;


    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[start] < arr[mid] && arr[mid] < arr[end]) return start;
        if(arr[mid] > arr[end]) start = mid + 1;
        else end = mid;
    }  

    return start;
}

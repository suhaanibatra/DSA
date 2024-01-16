int lowerBound(vector<int> arr, int n, int x) {
	int start = 0, end = n - 1;
	int lb = n; //if not present

	while(start <= end){
		int mid = start + (end - start)/2;

		if(arr[mid] >= x){
			lb = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
		
	}

	return lb;
}

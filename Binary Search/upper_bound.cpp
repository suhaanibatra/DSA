int upperBound(vector<int> &arr, int x, int n){
	int start = 0, end = n - 1;

	int ub = n;

	while(start <= end){
		int mid = start + (end - start)/2;
		if(arr[mid] <= x){
			
			start = mid + 1;
		}
		else{
			ub = mid;
			end = mid - 1;
		}
	}	

	return ub;
}

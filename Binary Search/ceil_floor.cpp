int ceil(vector<int>& arr, int n, int x){
	int start = 0, end = n - 1;
	int ans = -1;

	while(start <= end){
		int mid = start + (end - start)/2;

		if(arr[mid] >= x){
			ans = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}

	return ans;
}

int floor(vector<int>& arr,int n, int x){
	int start = 0, end = n - 1;
	int ans = -1;
	while(start <= end){
		int mid = start + (end - start)/2;

		if(arr[mid] <= x){
			ans = mid;
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}

	return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor_val = floor(a, n, x);
	int ceil_val = ceil(a, n, x);
	
	pair<int, int> ans;
	ans.first = floor_val != -1 ? a[floor_val] : -1;
	ans.second = ceil_val != -1 ? a[ceil_val] : -1;

	return ans;
}

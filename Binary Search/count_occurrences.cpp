int findFirstOcc(vector<int>& arr, int n, int x){
	int start = 0, end = n - 1;
	int ans = -1;

	while(start <= end){
		int mid = start + (end - start)/2;

		if(arr[mid] == x){
			ans = mid;
			end = mid - 1;
		}

		else if(arr[mid] < x){
			start = mid + 1;
		}

		else{
			end = mid - 1;
		}
	}

	return ans;
}

int findLastOcc(vector<int>& arr, int n, int x){
	int start = 0, end = n - 1;
	int ans = -1;

	while(start <= end){
		int mid = start + (end - start)/2;

		if(arr[mid] == x){
			ans = mid;
			start = mid + 1;
		}

		else if(arr[mid] < x){
			start = mid + 1;
		}

		else{
			end = mid - 1;
		}
	}

	return ans;
}

int count(vector<int>& arr, int n, int x) {
	int first = findFirstOcc(arr, n, x);
	int last = findLastOcc(arr, n, x);

	if(first == -1 && last == -1) return 0;
	return last - first + 1;
}

void selectionSort(vector<int>&arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int mini = arr[i];
        int mini_ind = i;
        for(int j = i; j < n; j++){
            if(arr[j] < mini){
                mini = arr[j];
                mini_ind = j;
            }
        }

        swap(arr[i], arr[mini_ind]);
    }
}

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    int largest = 0;
    int second_largest = -1;

    for(int i = 1; i < n; i++){
        int num = arr[i];

        if(num > arr[largest]){
            second_largest = largest;
            largest = i;
        }

        else if(num < arr[largest] && num > arr[second_largest] || second_largest == -1){
            second_largest = i;
        }
    }

    int smallest = 0;
    int second_smallest = -1;

    for(int i = 1; i < n; i++){
        int num = arr[i];

        if(num < arr[smallest]){
            second_smallest = smallest;
            smallest = i;
        }

        else if(num > arr[smallest] && num < arr[second_smallest] || second_smallest == -1){
            second_smallest = i;
        }
    }

    vector<int> ans;
    ans.push_back(arr[second_largest]);
    ans.push_back(arr[second_smallest]);

    return ans;
}

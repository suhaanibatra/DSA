void insertion_sort(int arr[], int i, int n){
    if(i == n) return;

    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]){
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);
}

void insertionSort(int arr[], int n)
{
    insertion_sort(arr, 0, n);
}

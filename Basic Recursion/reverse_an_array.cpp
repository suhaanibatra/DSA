void reverse(vector<int>& nums, int start, int end){
    if(start > end) return;
    swap(nums[start], nums[end]);
    reverse(nums, start + 1, end - 1);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    reverse(nums, 0, n - 1);
    return nums;
}

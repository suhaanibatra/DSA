bool isPossible(vector<int> &boards, int k, int mid){
    int currBoardLen = 0;
    int noOfPainters = 1;

    for(int i = 0; i < boards.size(); i++){
        if(currBoardLen + boards[i] <= mid){
            currBoardLen += boards[i];
        }
        else{
            noOfPainters++;
            if(noOfPainters > k || boards[i] > mid) return false;
            currBoardLen = boards[i];
        }
    }
    return true;

}

int findLargestMinDistance(vector<int> &boards, int k)
{
   int n = boards.size();
   
   int start = 0, end = accumulate(boards.begin(), boards.end(), 0);
   while(start <= end){
       int mid = (start + end)/2;
       if(isPossible(boards, k, mid)){
           end = mid - 1;
       }
       else{
           start = mid + 1;
       }
   }

   return start;
}

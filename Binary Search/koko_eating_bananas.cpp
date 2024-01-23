class Solution {
public:
    bool isPossible(vector<int>& piles, int h, int k){
        long long totalTime = 0;
        int n = piles.size();

        for(int i = 0; i < n; i++){
            totalTime += ceil((double)(piles[i]) / (double)(k));
        }

        if(totalTime <= h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        //since Koko can eat bananas from any one pile only, the maximum value of k can be max(piles[])

        //find maxi
        long long maxi = -1;
        int n = piles.size();
        for(int i = 0; i < n; i++){
            if(piles[i] > maxi) maxi = piles[i];
        }

        long long start = 1, end = maxi;
        long long ans = -1;
        while(start <= end){
            long long mid = start + (end - start)/2;
            if(isPossible(piles, h, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        return ans;
    }
};

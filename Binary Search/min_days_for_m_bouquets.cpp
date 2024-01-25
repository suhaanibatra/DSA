class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int day, int m, int k){
        int n = bloomDay.size();
        int cnt = 0;
        int noOfB = 0;

        for(int i = 0; i < n; i++){
            if(bloomDay[i] <= day) cnt++;
            else{
                noOfB += (cnt/k);
                cnt = 0; //because we need adjacent flowers
            }
        }

        noOfB += (cnt/k);
        return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        // make m bouquets -- use k adjacent flowers
        int n = bloomDay.size(); //n flowers in total

        long long val = m * 1ll * k * 1ll;
        if(val > n) return -1; //not possible

        //find minimum and maximum
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        //we will need minimum of mini days and a maximum of maxi days
        int start = mini, end = maxi;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(isPossible(bloomDay, mid, m, k)){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        return start;
    }
};

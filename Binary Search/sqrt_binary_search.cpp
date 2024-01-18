class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end = x;
        
        while(start <= end){
            long long mid = start + (end - start)/2;
            long long val = mid * mid;
            
            if(val <= (long long)x){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return end;
    }
};

class Solution {
public:
    int numSquares(int n) {
        if(n == 0) return 0;
        int cnt = INT_MAX;

        for(int i = 1; i*i <= n; i++){
            int ans = numSquares(n - i*i);
            cnt = min(cnt, 1 + ans);
        }
        return cnt;
    }
};

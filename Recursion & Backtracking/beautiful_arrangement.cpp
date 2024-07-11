class Solution {
public:
    void solve(int n, vector<int>& v, int currNum, int& cnt){
        if(currNum == n + 1){
            //arranged everything
            cnt++;
            return;
        }

        for(int i = 1; i <= n; i++){
            if(v[i] == 0 && (currNum % i == 0 || i % currNum == 0)){
                v[i] = currNum;
                solve(n, v, currNum + 1, cnt);
                v[i] = 0; //backtrack
            }
        }
    }
    int countArrangement(int n) {
        vector<int> v(n + 1);
        int currNum = 1;
        int cnt = 0;
        solve(n, v, currNum, cnt);
        return cnt;
    }
};

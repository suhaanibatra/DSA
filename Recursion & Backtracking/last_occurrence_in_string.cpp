//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void solve(string& s, char p, int ind, int& ans){
        if(ind >= s.length()) return;
        if(s[ind] == p) ans = ind;
        solve(s, p, ind + 1, ans);
    }
    int LastIndex(string s, char p){
        int ind = 0, ans = -1;
        solve(s, p, ind, ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends

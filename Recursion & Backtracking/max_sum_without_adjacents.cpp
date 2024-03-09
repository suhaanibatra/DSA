//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int* arr, int n, int ind){
	    if(ind < 0) return 0;
	    if(ind == 0) return arr[ind];
	    
	    int inc = solve(arr, n, ind - 2) + arr[ind];
	    int exc = solve(arr, n, ind - 1);
	    return max(inc, exc);
	}
	int findMaxSum(int *arr, int n) {
	    return solve(arr, n,  n - 1);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends

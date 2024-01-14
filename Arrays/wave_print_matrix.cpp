#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    bool flag = false; //left to right
    vector<int> ans;

    for(int i = 0; i < mCols; i++){
        if(!flag){
            for(int j = 0; j < nRows; j++){
                ans.push_back(arr[j][i]);
            }
        }
        else{
            for(int j = nRows - 1; j >= 0; j--){
                ans.push_back(arr[j][i]);
            }
        }

        flag = !flag;
    }

    return ans;
}

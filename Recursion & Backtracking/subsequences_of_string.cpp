#include <bits/stdc++.h> 
void solve(string& s, int ind, string temp, vector<string>& ans){
	if(ind >= s.length()){
		if(temp.length() != 0) ans.push_back(temp);
		return;
	}

	//not include
	solve(s, ind + 1, temp, ans);

	//include
	temp += s[ind];
	solve(s, ind + 1, temp, ans);
}

vector<string> subsequences(string str){
	vector<string> ans;
	string temp;	
	solve(str, 0, temp, ans);
	return ans;
}

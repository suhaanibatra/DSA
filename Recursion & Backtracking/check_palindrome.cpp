#include <iostream>
using namespace std;

bool check(string& s, int i, int j){
  if(i >= j) return true;
  if(s[i] != s[j]) return false;

  return check(s, i + 1, j - 1);
}

int main() {
  string str = "madame";
  cout << check(str, 0, str.length() - 1);
}

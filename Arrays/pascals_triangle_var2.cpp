#include <iostream>
using namespace std;

int main() {
  int row;
  cin >> row;

  int n = row - 1;
  for(int c = 0; c <= n; c++){
    int res = 1;
    for(int i = 1; i <= c; i++){
      res *= (n - i + 1);
      res /= i;
    }

    cout << res << " ";
  }
  return 0;
}

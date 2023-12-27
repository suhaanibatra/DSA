#include <iostream>
using namespace std;

int main() {
  int row, col;
  cin >> row >> col;

  int n = row - 1, r = col - 1; //0 -index
  int ans = 1;

  for(int i = 1; i <= r; i++){
    ans *= (n - i + 1);
    ans /= i;
  }

  cout << endl << ans << endl;
  return 0;
}

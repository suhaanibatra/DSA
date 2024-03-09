#include <iostream>
using namespace std;

void solve(int n, char from, char to, char aux){
  if(n == 0) return;
  solve(n - 1, from, aux, to);
  cout << "Move disk " << n << " from " << from << " to " << to << endl;
  solve(n - 1, aux, to, from);
}
int main() {
  solve(3, 'A', 'C', 'B');
  return 0;
}

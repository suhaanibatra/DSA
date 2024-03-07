#include <iostream>
using namespace std;

void printCounting(int n){
  if(n == 0) return;

  cout << n << " ";
  printCounting(n - 1);
}

int main() {
  int n = 5;
  //print 1 to n
  printCounting(n);
}

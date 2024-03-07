#include <iostream>
using namespace std;

void printDigits(int n){
  if(n == 0) return;
  int digit = n % 10;
  printDigits(n / 10);
  cout << digit << " ";
}

int main() {
  int num = 647;
  printDigits(num);
}

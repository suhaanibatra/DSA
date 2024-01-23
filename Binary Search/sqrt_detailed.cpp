#include <iostream>
using namespace std;

int sqrt(int n){
  int start = 1, end = n;
  while(start <= end){
    long long mid = start + (end - start)/2;
    long long val = mid * mid;
    // cout << mid << "    ->.    " << val << endl;
    if(val > n){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
  }

  return end;
}

double calcPrecision(int n, int sqrts, int precision){
  double ans = sqrts;
  double factor = 1;

  for(int i = 1; i <= precision; i++){
    factor = factor / 10;
    for(double j = ans; j * j <= n; j += factor){
      ans = j;
    }
  }

  return ans;
}

int main() {
  int n = 37;
  int sqrts = sqrt(n);

  cout << calcPrecision(n, sqrts, 2) << endl;
  cout << calcPrecision(n, sqrts, 3) << endl;
  cout << calcPrecision(n, sqrts, 4) << endl;
  cout << calcPrecision(n, sqrts, 5) << endl;
  return 0;
}

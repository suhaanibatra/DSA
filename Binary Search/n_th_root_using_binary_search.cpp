int check(int mid, int m, int n){
  long long ans = 1;
  for(int i = 1; i <= n; i++){
    ans *= mid;
    if(ans > m) return 2;
  }

  if(ans == m) return 1;

  return 0;
}


int NthRoot(int n, int m) {
  int start = 1, end = m;
  while(start <= end){
    int mid = start + (end - start)/2;

    int midAns = check(mid, m, n);

    if(midAns == 1) return mid;
    else if(midAns == 2) end = mid - 1;
    else start = mid + 1;
  }

  return -1;
}

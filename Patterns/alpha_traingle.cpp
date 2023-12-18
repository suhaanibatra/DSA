for(int i = 1; i <= n; i++){
    char start = 'A' + n - 1;
    for(int j = 0; j < i; j++){
      cout << start-- << " ";
    }
    cout << endl;
  }

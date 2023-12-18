int n = 5;
  for(int i = 1; i <= n; i++){
    
    for(int j = 0; j < n - i + 1; j++){
      if(i == 1 || j == 0 || j == n - i)
        cout << "* ";

      else cout << "  ";
    }

    cout << endl;
  }

for(int i = 1; i <= n; i++){

    for(int j = 0; j < n - i; j++){
      cout << "  ";
    }

    int start = i - 1;

    for(int j = 0; j < i; j++){
      start++;
      cout << start << " ";
    }

    start--;

    for(int j = 0; j < i - 1; j++){
      cout << start << " ";
      start--;
    }

    cout << endl;
  }

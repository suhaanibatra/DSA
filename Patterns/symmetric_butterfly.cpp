int spaces = 2*(n - 1);

  for(int i = 1; i <= n; i++){

    for(int j = 0; j < i; j++){
      cout << "*";
    }

    for(int j = 0; j < spaces; j++){
      cout << " ";
    }

    for(int j = 0; j < i; j++){
      cout << "*";
    }

    spaces -= 2;
    cout << endl;
  }

  spaces = 2;
  for(int i = n - 1; i >= 1; i--){

    for(int j = 0; j < i; j++){
      cout << "*";
    }

    for(int j = 0; j < spaces; j++){
      cout << " ";
    }

    for(int j = 0; j < i; j++){
      cout << "*";
    }

    spaces += 2;
    cout << endl;
  }

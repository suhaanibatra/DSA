int spaces = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i + 1; j++){
        cout << "* ";
        }

        for(int j = 0; j < spaces; j++){
        cout << " ";
        }

        for(int j = 0; j < n - i + 1; j++){
        cout << "* ";
        }
        spaces += 2;
        cout << endl;
    }


    for(int i = n; i >= 1; i--){
        spaces = 2*(i - 1);
        for(int j = 0; j < n - i + 1; j++){
        cout << "* ";
        }

        for(int j = 0; j < spaces; j++){
        cout << " ";
        }

        for(int j = 0; j < n - i + 1; j++){
        cout << "* ";
        }
        spaces += 2;
        cout << endl;
    }

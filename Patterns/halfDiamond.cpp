for(int i = 1; i <= 2*n - 1; i++){
        int k = i;
        if(i > n) k = 2*n - i;

        for(int j = 1; j <= k; j++){
            cout << "*";
        }
        cout << endl;
    }

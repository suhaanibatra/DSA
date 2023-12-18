for(int i = 0; i < n; i++){
      for(int j = 0; j < n - i - 1; j++){
          cout << " ";
      }
      char ch = 'A';

      for(; ch < 'A' + i; ch++){
        cout << ch << " ";
      }


      for(; ch >= 'A'; ch--){
        cout << ch << " ";
      }

      

      cout << endl;
  }

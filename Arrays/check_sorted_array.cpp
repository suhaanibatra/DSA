int isSorted(int n, vector<int> a) {
   //should be in increasing order

   for(int i = 1; i < n; i++){
       if(a[i - 1] <= a[i]) continue;
       else return 0;
   }

   return 1;
}

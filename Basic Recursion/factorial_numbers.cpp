long long fact(long long n){
    if(n == 0) return 1;
    return (n * fact(n - 1));
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> res;

    for(long long i = 1; i <= n; i++){
        long long f = fact(i);
        if(f <= n) res.emplace_back(f);
        else break;
    }

    return res;
}

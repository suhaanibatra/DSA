void sum(long long n, long long &sum_){
    if(n <= 0) return;
    sum_ += n;
    sum(n - 1, sum_);
}

long long sumFirstN(long long n) {
    long long sum_ = 0;  
    sum(n, sum_);
    return sum_; 
}

int func(int a, int b){
    if(a % b == 0) return b;

    return func(b, a % b);
}
int calcGCD(int n, int m){
    int mini = min(n, m);
    int maxi = max(n, m);

    return func(maxi, mini);

}

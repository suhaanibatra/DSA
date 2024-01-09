#include <unordered_map>
int subarraysWithSumK(vector < int > a, int b) {
    int n = a.size();
    unordered_map<int, int> mpp;

    int prefixXOR = 0;
    int cnt = 0;
    mpp[0] = 1;

    for(int i = 0; i < n; i++){
        prefixXOR ^= a[i];

        int rem = prefixXOR ^ b;
        cnt += mpp[rem];
        mpp[prefixXOR] += 1;
    }

    return cnt;
}

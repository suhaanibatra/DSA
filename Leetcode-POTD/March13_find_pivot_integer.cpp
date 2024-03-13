class Solution {
public:
    int pivotInteger(int n) {
        //math
        //sum 1 to x = sum x to n
        //sum 1 to x = sum 1 to n - sum 1 to (x-1)

        double sum = sqrt(n*(n+1)/2.0);

        if(floor(sum) == sum) return int(sum);
        return -1;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxPro = 0;

        for(int i = 1; i < prices.size(); i++){
            int currPro = prices[i] - minPrice;
            maxPro = max(maxPro, currPro);
            minPrice = min(minPrice, prices[i]);
        }

        return maxPro;
    }
};

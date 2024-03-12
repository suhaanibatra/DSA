class Solution {
public:
    int solve(vector<int>& prices, int ind, int minPrice, int maxProfit){
        if(ind >= prices.size() || ind < 0){
            return maxProfit;
        }

        int profit = prices[ind] - minPrice;
        maxProfit = max(profit, maxProfit);
        minPrice = min(minPrice, prices[ind]);

        return max(profit, solve(prices, ind + 1, minPrice, maxProfit));
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        return solve(prices, 1, prices[0], 0);
    }
};

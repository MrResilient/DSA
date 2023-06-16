class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int len = prices.size();
       int buy_price = INT_MAX;
       int profit = 0;
       for(int i=0; i<len; i++){
           buy_price = min(buy_price, prices[i]);
           profit = max(profit, prices[i] - buy_price);
       }
       return profit;
    }
};
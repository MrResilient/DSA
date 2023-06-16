class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int len = prices.size();
       if(len == 1){
           return 0;
       }
       int profit = 0;
       int buy_price = prices[0]; //min_price

       for(int i=1; i<len; i++){
           if(prices[i] > prices[i-1]){
               profit = max(profit, prices[i] - buy_price);
           }else{
               buy_price = min(buy_price, prices[i]);
           }
       }
       return profit;
    }
};
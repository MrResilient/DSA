class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int len = prices.size();
       if(len == 1){
           return 0;
       }
       int l = 0, r = 1, profit = 0;

       while(r < len){
           if(prices[r] < prices[l]){
               l = r;
               r++;
           }else{
               profit = max(profit, prices[r] - prices[l]);
               r++;
           }
       }
       return profit;
    }
};
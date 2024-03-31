class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mini = prices[0];
      int profit = 0;

      for(int i = 1; i < prices.size(); ++i)
      {
        int sellingProfit = prices[i] - mini;
        profit = max(profit, sellingProfit);
        mini = min(mini, prices[i]);
      }  

      return profit;
    }
};
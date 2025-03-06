class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = i+1;
        int maxProfit = 0;
        int profit = 0;
        while(j < prices.size()){
            if(prices[j] > prices[i]){
                profit = prices[j] - prices[i];
                maxProfit = max(profit, maxProfit);
                j++;
            }
            else{
                i = j;
                j++;
            }
        }
        return maxProfit;
        
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int buy = 0;
        int sell = buy+1;
        int profit = 0;
        while(sell < prices.size()){
            if(prices[buy] < prices[sell]){
                profit = prices[sell] - prices[buy];
                maxi = max(maxi, profit);
                sell++;
            }
            else{
                buy = sell;
                sell++;
            }
        }
        return maxi;
        
    }
};
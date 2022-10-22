class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        //keep track of minimum element from left and keep updating the profit
        int n = prices.size();
        int mn = INT_MAX;
        int profit=0;
        
        for(int i=0;i<n;i++)
        {
            if(prices[i]<mn)
            {
                mn = prices[i];
            }
            profit = max(profit, prices[i]-mn);
        }
        return profit;
    }
};
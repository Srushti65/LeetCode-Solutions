class Solution {
public:
    int maxProfit(vector<int>& nums) 
    {
        
        int maxVal = 0, minVal = INT_MAX, diff = 0;

            for(int i = 0; i < nums.size(); i++) {
                minVal = min(minVal, nums[i]);
                maxVal = max(maxVal, nums[i] - minVal);
            }
            return maxVal;
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int cur = 0;
        int ans = INT_MIN;
        
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(cur<= 0)
            {
                cur = 0;
            }
            cur += nums[i];
            ans = max(ans, cur);
        }
        return ans;
        
    }
};
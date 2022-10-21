class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans = INT_MIN, cur=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            // cur+=nums[i];
            if(cur<0)
            {
                cur=0;
                
            }
            cur += nums[i];
            ans = max(ans,cur);
        }
        return ans;
    }
};
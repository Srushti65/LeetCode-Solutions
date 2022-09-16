class Solution {
public:
    int maxSubArray(vector<int>& v) 
    {
        int n = v.size();
        
        int cur = 0;
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(cur<0)
            {
                cur = 0;
            }
            cur += v[i];
            ans = max(ans,cur);
        }
        return ans;
    }
};
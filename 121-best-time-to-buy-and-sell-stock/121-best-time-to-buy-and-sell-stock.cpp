class Solution {
public:
    int maxProfit(vector<int>& v) 
    {
        int n = v.size();
        int lv= v[0] ;
        int ans = 0;
        
        for(int i=1;i<n;i++)
        {
            lv = min(lv, v[i]);
            ans = max(ans, v[i]-lv);
        }
        return ans;
    }
};
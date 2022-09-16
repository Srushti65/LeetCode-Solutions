class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) 
    {
        vector<vector<int>> op;
        sort(v.begin(), v.end());
        int n = v.size();
        
        for(int i=0;i<=n-3;i++)
        {
            if(i==0 || v[i]!=v[i-1])
            {int target = -v[i];
            
            int start = i+1;
            int end = n-1;
            
            while(start<end)
            {
                if(v[start]+v[end]>target)
                {
                    end--;
                }
                else if(v[start]+v[end]<target)
                {
                    start++;
                }
                else
                {
                    op.push_back({v[i],v[start],v[end]});
                    while(start+1 <n && v[start]==v[start+1]) start++;
                    while(end-1>=0  && v[end]==v[end-1]) end--;
                    
                    start++;
                    end--;
                
                }
            }
            }
        }
        return op;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]=5;
        }
        int ans = 0;
        int length;
        
        for(int i=0;i<n;i++)
        {
            int x = nums[i];
            if(m[x-1]==5)
                continue;
            else 
            {
                
                int low = x;
                while(m[x+1]==5)
                {
                    x++;
                }
                length = x-low+1;
                // cout<<x<<endl;
                ans = max(ans,length);
            }
        }
        return ans;
    }
};
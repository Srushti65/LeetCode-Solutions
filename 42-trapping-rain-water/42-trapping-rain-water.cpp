class Solution {
public:
    int trap(vector<int>& v) 
    {
        int n = v.size();
        int left = 0;
        int right = n-1;
        int lmax = v[left];
        int rmax = v[right];
        int ans=0;
        
        while(left<=right)
        {
            if(v[left]<=v[right])
            {
                 if(v[left]>lmax)
                 {
                     lmax=v[left];
                 }
                else
                {
                    ans += lmax-v[left];
                }
                left++;
            }
            else
            {
                if(v[right]>rmax)
                {
                    rmax = v[right];
                }
                else
                {
                    ans += rmax-v[right];
                }
                right--;
            }
        }
        return ans;
    }
};
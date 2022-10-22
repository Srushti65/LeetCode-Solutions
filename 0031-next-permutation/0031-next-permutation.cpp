class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size();
        int l;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i] < nums[i+1])
            {
                l=i;
                break;
            }
                // break;
        }
        if(l<0)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int r = n-1;
        for(int i=r;i>=0;i--)
        {
            if(nums[i]>nums[l])
            {
                r=i;
                break;
            }
        }
        
        swap(nums[l],nums[r]);
        
        reverse(nums.begin()+l+1, nums.end());
        
        
        
    }
};
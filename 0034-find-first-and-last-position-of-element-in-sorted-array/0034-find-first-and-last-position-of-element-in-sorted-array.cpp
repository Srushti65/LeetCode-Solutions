class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size();
        //for first
        int l=0;
        int h = n-1;
        int lk=-1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            
            if(nums[mid]==target)
            {
               lk = mid;
                h = mid-1;
            }
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        vector<int> ans(2,0);
        ans[0]=lk;
        l=0;
        h=n-1;
        int rk=-1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            
            if(nums[mid]==target)
            {
               rk = mid;
                // h = mid-1;
                l = mid+1;
            }
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
        ans[1]=rk;
            return ans;
    }
};
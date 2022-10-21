class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n = nums.size();
        int l=0;
        int c=0,h=n-1;
        
        while(c<=h)
        {
            if(nums[c]==0)
            {
                swap(nums[l],nums[c]);
                c++;
                l++;
            }
            else if(nums[c]==2)
            {
                swap(nums[c],nums[h]);
                h--;
            }
            else
            {
                c++;
            }
        }
        
    }
};
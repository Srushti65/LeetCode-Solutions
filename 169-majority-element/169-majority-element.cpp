class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int c=0;
        int e;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
         
            if(c==0)
            {
                c=1;
                e = nums[i];
            }
            else if(nums[i]==e)
            {
                c++;
            }
            else
            {
                c--;
            }
                
        }
        return e;
        
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int rsum = 0;
        int lsum = 0;
        int index=-1;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            rsum += nums[i];
        }
        cout<<rsum<<endl;
        
        for(int i=0;i<n;i++)
        {
            rsum -= nums[i];
            
           // cout<<"rsum = "<<rsum<<endl;
            
            if(rsum==lsum) return i;
            
            lsum+= nums[i];
            //cout<<"lsum = "<<lsum<<endl;
        }
        return index;
    }
};
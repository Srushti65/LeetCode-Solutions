class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        
        int count=0;
        
        int sum = 0;
        map<int,int> m;
        m[sum]=1;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            if(m[sum-k]!=0)
            {
               count = count+m[sum-k];
            }
            m[sum]++;
            
        }
        
//         for(auto i : nums)
//         {
//             sum = sum + i; //calculate the prefix sum 
            
//             if(mp.find(sum - k) != mp.end()) // we using this case X + (X - k) = k
//             {
//                 count = count + mp[sum - k];
//             }
//             mp[sum]++;
//         }
//         return count;
        return count;
    }
};
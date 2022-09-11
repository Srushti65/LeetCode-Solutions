class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<int> op;
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
            int exp = target-nums[i];
            if(m.find(exp)!=m.end())
            {
                op.push_back(m[exp]);
                op.push_back(i);
                //return op;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return op;
    }
};
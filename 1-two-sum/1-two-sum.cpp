class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> m;
        vector<int> op;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(m[target-nums[i]]==0)
            {
                m[nums[i]] = i+1;
            }
            else
            {
                op.push_back(m[target-nums[i]]-1);
                op.push_back(i);
                break;
            }
        }
        return op;
    }
};
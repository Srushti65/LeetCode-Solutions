class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> op;
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            op.push_back(sum);
        }
        
        return op;
    }
};
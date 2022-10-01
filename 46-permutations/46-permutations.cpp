class Solution {
public:
    
    void solve(int index, int n, vector<vector<int>> &op, vector<int> &nums)
    {
        if(index==n)
        {
            op.push_back(nums);
            return;
        }
        for(int i=index;i<n;i++)
        {
            swap(nums[index],nums[i]);
            solve(index+1,n,op,nums);
            swap(nums[index],nums[i]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> op;
        solve(0,n,op,nums);
        return op;
    }
};
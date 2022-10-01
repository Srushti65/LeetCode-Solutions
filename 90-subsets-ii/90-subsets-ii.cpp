class Solution {
public:
    void func(set<vector<int>> &op, vector<int>&nums, int index, int n,vector<int> &temp)
    {
        if(index==n)
        {
            op.insert(temp);
            return;
        }
        func(op,nums,index+1,n,temp);
        temp.push_back(nums[index]);
        func(op,nums,index+1,n,temp);
        temp.pop_back();
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> op;
        int n = nums.size();
        vector<int> temp;
        func(op,nums,0,n,temp);
        //return op;
        vector<vector<int>> ans;
        
        for(auto i : op)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
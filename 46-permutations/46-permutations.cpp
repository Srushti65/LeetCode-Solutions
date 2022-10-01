class Solution {
public:
    int factt(int n)
    {
        if(n==1)
        {
            return 1;
        }
        return n*factt(n-1);
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> op;
        int n = nums.size();
        int fact = factt(n);
        
        for(int i=0;i<fact;i++)
        {
            next_permutation(nums.begin(), nums.end());
            op.push_back(nums);
            //nums = tmep;
        }
        return op;
    }
};
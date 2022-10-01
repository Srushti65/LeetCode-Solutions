class Solution {
public:
    void func(vector<vector<int>> &op, vector<int> &temp, int target, int index, int n,vector<int> &cand)
    {
        if(index==n)
        {
            if(target==0)
                op.push_back(temp);
            return;
        }
        if(cand[index]<=target)
        {
            //pick the element
            temp.push_back(cand[index]);
            func(op,temp,target-cand[index],index,n,cand);
            temp.pop_back();
        }
        func(op,temp,target,index+1,n,cand);
        
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int target) 
    {
        vector<int> temp;
        vector<vector<int>> op;
        int n = cand.size();
        
        func(op,temp,target,0,n,cand);
        return op;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) 
    {
        int start = 0;
        int n = v.size();
        int end = n-1;
        
        while(start<=end)
        {
            if(v[start] + v[end] >target)
            {
                end--;
            }
            else if(v[start] + v[end] < target)
            {
                start++;
            }
            else
            {
                return {start+1,end+1};
            }
        }
        
        return {-1,-1};
        
        
    }
};
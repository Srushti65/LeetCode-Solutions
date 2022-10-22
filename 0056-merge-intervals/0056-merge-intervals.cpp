class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        
        vector<vector<int>> op;
        int n = intervals.size();
        if(n==0 ) return op;
        if(n==1) return intervals;
        sort(intervals.begin(), intervals.end());
        
        vector<int> cur = intervals[0];
        
        int i=1;
        while(i<n)
        {
            if(intervals[i][0]<=cur[1])
            {
                cur[0] = min(cur[0], intervals[i][0]);
                cur[1] = max(cur[1], intervals[i][1]);
            }
            else
            {
                op.push_back(cur);
                cur = intervals[i];
            }
            i++;
        }
        op.push_back(cur);
        return op;
        
    }
};
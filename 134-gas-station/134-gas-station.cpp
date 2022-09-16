class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int gsum=0, csum=0;
        
        int n = gas.size();
        
        for(int i=0;i<n;i++)
        {
            gsum += gas[i];
            csum += cost[i];
        }
        if(gsum<csum) return -1;
        
        int total = 0;
        int res= 0;
        int op;
        
        for(int i=0;i<n;i++)
        {
            total += gas[i]-cost[i];
            if(total<0)
            {
                total = 0;
               res = i+1;
            }
        }
        return res;
    }
};
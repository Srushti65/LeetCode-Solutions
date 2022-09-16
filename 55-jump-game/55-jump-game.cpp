class Solution {
public:
    bool canJump(vector<int>& v) 
    {
        int n = v.size();
        int safe = n-1;
        for(int i=n-2;i>=0;i--)
        {
            int max = i + v[i];
            if(max>=safe)
            {
                safe = i;
            }
        }
        if(safe==0) return true;
        else return false;
    }
};
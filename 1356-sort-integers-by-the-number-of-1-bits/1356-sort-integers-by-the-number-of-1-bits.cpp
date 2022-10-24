class Solution {
public:
    
    int static setBits(int x)
    {
        int count=0;
        while(x>0)
        {
            count += x&1;
            x = x>>1;
        }
        return count;
    }
    bool static func(int a, int b)
    {
        if(setBits(a)<setBits(b))
            return true;
        else if(setBits(a)>setBits(b))
            return false;
        else
            return (a<b);
    }
    
    vector<int> sortByBits(vector<int>& arr) 
    {
        int n = arr.size();
        
        sort(arr.begin(), arr.end(), func);
        return arr;
    }
};
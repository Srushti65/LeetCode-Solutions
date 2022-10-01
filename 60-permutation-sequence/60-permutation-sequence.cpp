class Solution {
public:
    string getPermutation(int n, int k) 
    {
        k--; // because of 0-based indexing
        vector<int> v;
        //store all the n numbers in array
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        //count n-1 factorial;
        int fact=1;
        for(int i=1;i<n;i++)
        {
            fact = fact*i;
        }
        string ans = "";
        while(true)
        {
            int index = k/fact;
            ans += to_string(v[index]);
            v.erase(v.begin()+index);
            if(v.size()==0) break;
            k = k%fact;
            fact = fact/v.size();
        }
        return ans;
        
        
    }
};
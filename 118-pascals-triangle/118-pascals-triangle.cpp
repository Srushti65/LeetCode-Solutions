class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> v;
        if(n>=1)
        {
            v.push_back({1});
        }
        for(int i=1;i<n;i++)
        {
            vector<int> temp;
            int tmp=1;
            temp.push_back(1);
            for(int j=1;j<=i;j++)
            {
                tmp = tmp * (i-j+1)/j;
                temp.push_back(tmp);
            }
            v.push_back(temp);
        }
        return v;
    }
};
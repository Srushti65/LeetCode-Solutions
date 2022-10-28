class Solution {
public:
    void solve(int index, string digits, vector<string> &ans, string temp, vector<string> mapping)
    {
        if(index>=digits.length())
        {
            // cout<<temp<<" ";
            if(temp!="")
                ans.push_back(temp);
            return;
        }
        int x = digits[index]-'0';
        string value = mapping[x];
        
        for(int i=0;i<value.length();i++)
        {
            temp.push_back(value[i]);
            solve(index+1, digits,ans,temp,mapping);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) 
    {
        vector<string> ans;
        string temp = "";
        vector<string> mapping = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
        
        solve(0,digits,ans,temp,mapping);
        return ans;
        
    }
};
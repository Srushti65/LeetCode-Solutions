class Solution {
public:
    string countAndSay(int n) 
    {
        // string s = "1";
//         if(n==1) return "1";
//         string s = countAndSay(n-1);
        
//         string ans="";
        
        
//         for(int i=0;i<s.size();i++)
//         {
//             // char val = s[i];
//             int count=1;
//             while(i+1<n && s[i]==s[i+1])
//             {
//                 count++;
//                 i++;
//             }
//             // ans.push_back(to_string(count);
//             // ans.push_back(i);
            
//             ans += to_string(count);
//             ans +=s[i];
//         }
        
//         return ans;
        if(n == 1){
            return "1";
        }
        string s = countAndSay(n - 1);
        string ans = "";
        for(int i = 0; i<s.size(); i++){
            int count = 1;
            while(i < (s.size() - 1) and (s[i] == s[i + 1])){
                i++;
                count++;
            }
            ans.append(to_string(count) + s[i]);
        }
        return ans;
    }
};
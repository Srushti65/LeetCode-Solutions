class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n = s.length();
        
        int l = 0;
        int r = 0;
        int ans = 0;
        
        set<char> st;
        
        while(l<n)
        {
            auto it = st.find(s[l]);
            if(it==st.end()) // char is not present in set
            {
                ans = max(ans, l-r+1);
                st.insert(s[l]);
                l++;
            }
            else
            {
                st.erase(s[r]);
                r++;
            }
        }
        return ans;
        
    }
};
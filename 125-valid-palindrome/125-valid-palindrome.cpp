class Solution {
public:
    bool isPalindrome(string s) 
    {
         transform(s.begin(), s.end(), s.begin(), ::tolower);
            string temp = "";
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            if( (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') )
                temp += s[i];
        }
        
        int l = 0;
        int r = temp.size()-1;
        //cout<<"temp = "<<temp<<endl<<l<<r<<endl;
        while(l<=r)
        {
            if(temp[l]==temp[r])
            {
                l++;
                r--;
                // cout<<temp[l];
            }
            else
                return false;
        }
        return true;
    }
};
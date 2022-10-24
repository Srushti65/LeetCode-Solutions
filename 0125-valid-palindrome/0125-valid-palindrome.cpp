class Solution {
public:
    bool func(int start, int end, string &s)
    {
        if(start>end)
        {
            cout<<endl<<"because start>end"<<endl;
            return true;
        }
        else if(s[start]==s[end])
        {
            start++;
            end--;
            return func(start,end,s);
        }
        else
            return false;
    }
    
    bool isPalindrome(string s) 
    {
        if(s=="") return true;
        
        int n = s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i] = tolower(s[i]);
            }
        }
        //remove space
        string temp = "";
        int j=0;
        while(j<n)
        {
            if((s[j]>='a' && s[j]<='z')||(s[j]>='0' && s[j]<='9') )
            {
                temp+=s[j];
            }
            j++;
        }
        
        // cout<<"temp = "<<temp<<endl;
        
        
        int start= 0 ;
        int end = temp.size()-1;
        return func(start,end,temp);
        
    }
};
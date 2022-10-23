class Solution {
public:
    int trap(vector<int>& v) 
    {
        int n = v.size();
        int left = 0;
        int right = n-1;
        
        int leftbar = v[0];
        int rightbar = v[n-1];
        int ans = 0;
        
        while(left<=right)
        {
            //which bar is limiting
            if(leftbar<rightbar)
            {
                //leftbar is limiting
                if(leftbar<v[left])
                {
                    leftbar = v[left];
                }
                else
                {
                    ans+= leftbar-v[left];
                } 
                left++;
                
            }
            else //rightbar is limiting
            {
                if(rightbar<v[right])
                {
                    rightbar = v[right];
                }
                else
                {
                    ans += rightbar-v[right];
                }
                right--;
            }
        }
    return ans;
    }
};
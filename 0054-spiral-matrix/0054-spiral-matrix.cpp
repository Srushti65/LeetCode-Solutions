class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) 
    {
        vector<int> ans;
        int r = mat.size();
        int c = mat[0].size();
        int cd = r*c;
        
        int l=0,el=c-1,u=0,eu=r-1;
        
        while(l<=el && u<=eu)
        {
            if(ans.size()==cd) break;
            for(int i=l;i<=el;i++)
            {
                ans.push_back(mat[u][i]);
            }
            u++;
             if(ans.size()==cd) break;
            for(int i = u;i<=eu;i++)
            {
                ans.push_back(mat[i][el]);
            }
            el--;
             if(ans.size()==cd) break;
            for(int i=el;i>=l;i--)
            {
                ans.push_back(mat[eu][i]);
            }
            eu--;
             if(ans.size()==cd) break;
            for(int i=eu;i>=u;i--)
            {
                ans.push_back(mat[i][l]);
            }
            l++;
        }
        return ans;
        
    }
};
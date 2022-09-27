class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) 
    {
        int r = mat.size();
        int c = mat[0].size();
        
        vector<int> row(r,-1);
        vector<int> col(c,-1);
        
        for(int i=0;i<r;i++)
        {
            // if(row[i]==0)
            // {
            //     continue;
            // }
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                    // break;
                }
            }
        }
        // cout<<"Row vector"<<endl;
        // for(int i=0;i<r;i++)
        // {
        //     cout<<row[i]<<" ";
        // }
        // cout<<endl<<"Column vector"<<endl;
        // for(int i=0;i<c;i++)
        // {
        //     cout<<col[i]<<" ";
        // }
        // cout<<endl;
        
        for(int i=0;i<r;i++)
        {
            if(row[i]==0)
            {
                for(int j=0;j<c;j++)
                {
                    mat[i][j] = 0;
                }
            }
        }
        
        for(int i=0;i<c;i++)
        {
            if(col[i]==0)
            {
                for(int j=0;j<r;j++)
                {
                    mat[j][i] = 0;
                }
            }
        }
    }
};
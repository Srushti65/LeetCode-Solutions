class Solution {
public:
    int uniquePaths(int r, int c) 
    {
        vector<vector<int>> grid(r,vector<int>(c,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==0 || j==0)
                {
                    grid[i][j]=1;
                }
            }
        }
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                grid[i][j] = grid[i-1][j]+grid[i][j-1];
            }
        }
        return grid[r-1][c-1];
    }
};
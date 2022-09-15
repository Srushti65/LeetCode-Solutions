class Solution {
public:
    
    void dfs(int i, int j, vector<vector<int>> &grid)
    {
        int r = grid.size();
        int c = grid[0].size();
        
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0)
            return;
        
        
    }
    
    int orangesRotting(vector<vector<int>>& grid) 
    {
        
        int r = grid.size();
        int c = grid[0].size();
        
        
        queue<pair<int,int>> q;
        
        int fresh = 0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                    fresh++;
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        int min = 0;
        vector<pair<int,int>> dir = {{0,1}, {1,0}, {-1,0},{0,-1}};
        
        while(q.size())
        {
            int n = q.size();
            if(fresh==0) return min;
            while(n)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                for(int i=0;i<4;i++)
                {
                    int xx = x+dir[i].first;
                    int yy = y+dir[i].second;
                    
                    if(xx>=0 && xx<r && yy>=0 && yy<c && grid[xx][yy]==1)
                    {
                        grid[xx][yy] = 2;
                        q.push({xx,yy});
                        fresh--;
                    }
                }
                
                n--;
            }
            min++;
        }
        
        if(fresh!=0) return -1;
        
        return min;
    }
};
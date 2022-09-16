class Solution {
public:
   
    
    
    int findPar(int x,vector<int> &par, vector<int> &rank)
    {
        if(x==par[x]) return x;
        else
            return findPar(par[x],par,rank);
    }
    
    bool check(int x, int y,vector<int> &par, vector<int> &rank)
    {
        int p1 = findPar(x,par,rank);
        int p2 = findPar(y,par,rank);
        if(p1==p2) return 0;
        else 
        {
            if(rank[p1]>rank[p2])
            {
                par[p2] = p1;
                rank[p1] = rank[p1]+rank[p2];
            }
            else
            {
                par[p1] = p2;
                rank[p2] = rank[p2] + rank[p1];
            }
        }
        return 1;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        int n = edges.size();
       vector<int> par(n+1);
        vector<int> rank(n+1);
        
        for(int i=0; i<n+1; i++)
        {
            par[i] = i;
            rank[i] = 1;
        }
        
        for(int i=0;i<n;i++)
        {
            int x = edges[i][0];
            int y = edges[i][1];
            if(check(x,y,par,rank)==0)
                return{edges[i]};
            else
                continue;
        }
        return {-1,-1};
    }
};
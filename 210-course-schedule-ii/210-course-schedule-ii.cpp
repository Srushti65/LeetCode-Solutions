class Solution {
public:
    
    bool isCycle(int i, vector<vector<int>> &adj, vector<int> vis, vector<int> &chk, vector<int> &op)
    {
        if(vis[i]==1) return 1;
        if(chk[i]==1) return 0;
        vis[i]=1;
        for(auto j : adj[i])
        {
            if(chk[j]==0 && isCycle(j,adj,vis,chk,op))
                return 1;
        }
        chk[i]=1;
        op.push_back(i);
        return 0;
    }
    
    vector<int> findOrder(int n, vector<vector<int>>& v) 
    {
        vector<vector<int>> adj(n);
        for(auto i:v)
        {
            adj[i[0]].push_back(i[1]);
        }
        
        
        vector<int> vis(n,0);
        vector<int> chk(n,0);
        vector<int> op;
        
        for(int x=0;x<n;x++)
        {
            if(chk[x]==0 && isCycle(x, adj, vis, chk, op))
                return {};
        }
        return op;
    }
};
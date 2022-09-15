class Solution {
public:
    
    bool isCycle(int i, vector<vector<int>> &adj, vector<int> &chk, vector<int> vis)
    {
        if(vis[i] == 1) return 1;
        vis[i]=1;
        if(chk[i]==1) return 0;
        for(auto j : adj[i])
        {
            if(chk[j]==0 && isCycle(j,adj,chk, vis))
                return 1;
        }
        
        chk[i] = 1;
        return 0;
    }
    
    bool canFinish(int n, vector<vector<int>>& v) 
    {
        vector<vector<int>> adj(n);
        
        int size = v.size();
        
        
        //adj list
        for(auto i:v)
        {
            int f = i[0];
            int s = i[1];
            adj[f].push_back(s);
        }
        
        vector<int> chk(n,0);
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(chk[i]==0 && isCycle(i,adj,chk, vis))
                return 0;
        }
        return true;
    }
};
class Solution {
public:
    
    int parent[1000], siz[1000];
    int cc;

    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (siz[a] < siz[b])
                swap(a, b);
            parent[b] = a;
            siz[a] += siz[b];
            cc--;
        }
    }

    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj.size();
        cc = n;
        
        for(int i = 0; i < n; i++){
            parent[i] = i;
            siz[i] = 1;
        }
        
        
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(adj[i][j] == 1)
                    if(parent[i] != parent[j])
                        union_sets(i,j);
        
        return cc;
        
        
        
    }
};
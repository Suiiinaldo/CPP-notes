#include<bits/stdc++.h>
using namespace std;
class DSU
{
    vector<int> rank,parent,size;
    public:
    DSU(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i = 0;i<=n;i++)
            parent[i] = i;
    }
    int findParent(int node)
    {
        if(parent[node] == node)
            return node;
        return  parent[node] = findParent(parent[node]);
    }
    void UnionByRank(int u,int v)
    {
        int ultParent_u = findParent(u);
        int ultParent_v = findParent(v);
        if(ultParent_u == ultParent_v)return;
        if(rank[ultParent_u] < rank[ultParent_v])
        {
            parent[ultParent_u] = ultParent_v;
        }
        else if(rank[ultParent_v] < rank[ultParent_u])
        {
            parent[ultParent_v] = ultParent_u;
        }
        else
        {
            parent[ultParent_v] = ultParent_u;
            rank[ultParent_u]++;
        }
    }
    void UnionBySize(int u,int v)
    {
        int ultParent_u = findParent(u);
        int ultParent_v = findParent(v);
        if(ultParent_u == ultParent_v)return;
        if(size[ultParent_u] < size[ultParent_v])
        {
            parent[ultParent_u] = ultParent_v;
            size[ultParent_v]+=size[ultParent_u];
        }
        else
        {
            parent[ultParent_v] = ultParent_u;
            size[ultParent_u]+=size[ultParent_v];
        }
    }
};
class KrukshalAlgo
{
    public:
    vector<pair<int,int>> spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int,int>> res;
        vector<pair<int,pair<int,int>>> edges;
        for(int i = 0;i<V;i++)
        {
            for(auto it : adj[i])
            {
                int node = i;
                int adjnode = it[0];
                int weight = it[1];

                edges.push_back({weight,{node,adjnode}});
            }
        }
        DSU ds(V);
        sort(edges.begin(),edges.end());
        int sum = 0;
        for(auto it : edges)
        {
            if(ds.findParent(it.second.second)!=ds.findParent(it.second.first))
            {
                sum+=it.first;
                res.push_back({it.second.first,it.second.second});
                ds.UnionBySize(it.second.second,it.second.first);
            }
        }
        cout<<"MST is : "<<sum<<endl;
        return res;
    }
};

int main()
{
    cout<<"Enter the Number of nodes and Edges\n";
    int V, E;
    cin >> V >> E;
    vector<vector<int>> adj[V];
    int i=0;
    while (i++<E) {
        int u, v, w;
        cin >> u >> v >> w;
        vector<int> t1,t2;
        t1.push_back(v);
        t1.push_back(w);
        adj[u].push_back(t1);
        t2.push_back(u);
        t2.push_back(w);
        adj[v].push_back(t2);
    }
    KrukshalAlgo obj;
    vector<pair<int,int>> res =  obj.spanningTree(V, adj);
    for(auto it : res)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
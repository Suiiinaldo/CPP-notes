#include<bits/stdc++.h>
using namespace std;
bool checkdfs(int node,int parent,vector<int> adj[],int vis[])
{
    vis[node] = 1;
    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            if(checkdfs(it,node,adj,vis) == true)
            return true;
        }
        else if(it!=parent)
            return true;
    }
    return false;
}
bool detectCycle(vector<int> adj[],int V)
{
    int vis[V] = {0};
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
            if(checkdfs(i,-1,adj,vis) == true)
                return true;
    }
    return false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool f = detectCycle(adj,n);
    cout<<boolalpha<<f<<endl;
}
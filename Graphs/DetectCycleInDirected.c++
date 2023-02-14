#include<bits/stdc++.h>
using namespace std;
bool checkdfs(int vis[],int pathVis[],vector<int> adj[],int node)
{
    vis[node] = 1;
    pathVis[node] = 1;
    for(auto it: adj[node])
    {
        if(!vis[node])
        {
            if(checkdfs(vis,pathVis,adj,it) == true)
            return true;
        }
        else if(pathVis[node])
            return true;
    }
    pathVis[node] = 0;
    return false;
}
bool detectCycle(vector<int> adj[],int V)
{
    int vis[V] = {0};
    int pathVis[V] = {0};
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            if(checkdfs(vis,pathVis,adj,i) == true)
            return true;
        }
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
    }
    bool f = detectCycle(adj,n);
    cout<<boolalpha<<f<<endl;
}
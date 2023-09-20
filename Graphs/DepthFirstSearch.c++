#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],int vis[],vector<int> &ls)
{
    vis[node] = 1;
    ls.push_back(node);
    for(auto it : adj[node])
    {
        if(!vis[it])
        dfs(it,adj,vis,ls);
    }
}
vector<int> dfsofGraph(int n,vector<int> adj[])
{
    int vis[n]={0};
    vector<int> ls;
    int start = 0;
    dfs(start,adj,vis,ls);
    return ls;
}
int main()
{
    int n,m;
    cout<<"Enter the Number of vertices and edges\n";
    cin>>n>>m;
    vector<int>adj[n];
    cout<<"Enter the vertices with the edge they have\n";
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Adjacency List is \n";
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto it : adj[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout<<"DFS of the Graph is\n";
    vector<int> ls = dfsofGraph(n,adj);
    for(auto it: ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
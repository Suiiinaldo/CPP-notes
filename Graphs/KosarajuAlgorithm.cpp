#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> SCC;
void dfs(int node,stack<int> &s,vector<vector<int>> &adj,vector<int> &vis)
	{
	    vis[node] = 1;
	    for(auto it: adj[node])
	    {
	        if(!vis[it])
	            dfs(it,s,adj,vis);
	    }
	    s.push(node);
	}
void dfs2(vector<int> &layer,int node,vector<int> adj[],vector<int> &vis)
{
    vis[node] = 1;
    layer.push_back(node);
    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            dfs2(layer,it,adj,vis);
        }
    }
}
int kosaraju(int V, vector<vector<int>>& adj)
{
    vector<int> vis(V,0);
    stack<int> s;
    for(int i = 0;i<V;i++)
    {
        if(!vis[i])
            dfs(i,s,adj,vis);
    }
    vector<int> adjRev[V];
    for(int i=0;i<V;i++)
    {
        vis[i] = 0;
        for(auto it: adj[i])
        {
            adjRev[it].push_back(i);
        }
    }
    int count = 0;
    while(!s.empty())
    {
        int node = s.top();
        s.pop();
        if(!vis[node])
        {
            vector<int> layer;
            dfs2(layer,node,adjRev,vis);
            count++;
            SCC.push_back(layer);
        }
    }
    return count;
}
int main()
{
    int node,edges;
    cin>>node>>edges;
    vector<vector<int>> adj(node);
    for(int i = 0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cout<<kosaraju(node,adj)<<endl;
    cout<<"The Strongly Connected Components are : \n";
    for(int i = 0;i<node;i++)
    {
        for(auto it : SCC[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
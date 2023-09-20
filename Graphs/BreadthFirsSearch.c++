#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(int n,vector<int> adj[])
{
    int vis[n]={0};
    vis[0]=1;
    queue<int>q;
    q.push(0);
    vector<int> res;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        res.push_back(node);
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return res;
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
    cout<<"Adjacency List is\n";
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto it : adj[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout<<"BFS of the Graph is\n";
    vector<int> ls = bfs(n,adj);
    for(auto it: ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
/*
0 1 
0 2
0 3
1 4
2 3
3 4
*/
}
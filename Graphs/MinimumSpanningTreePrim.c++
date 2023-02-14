#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> spanningTree(int V, vector<vector<int>> adj[])
{
    vector<pair<int,int>> res;
    priority_queue<pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    vector<int> vis(V,0);
    pq.push({0,{0,-1}});
    int sum = 0;
    while(!pq.empty())
    {
        int node = pq.top().second.first;
        int parent = pq.top().second.second;
        int weight = pq.top().first;
        pq.pop();
        if(vis[node])continue;
        vis[node] = 1;
        sum+=weight;
        if(parent != -1)
        {
            res.push_back({parent,node});
        }
        for(auto it : adj[node])
        {
            if(!vis[it[0]])
            {
            pq.push({it[1],{it[0],node}});
            }
        }
    }
    cout<<"Sum = "<<sum<<endl;
    return res;
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        vector<int> t1,t2;
        t1.push_back(v);
        t1.push_back(w);
        t2.push_back(u);
        t2.push_back(w);
        adj[u].push_back(t1);
        adj[v].push_back(t2);
    }
    vector<pair<int,int>> res = spanningTree(n,adj);
    for(auto it : res)
    {
        cout<<it.first<<" --> "<<it.second<<endl;
    }
}
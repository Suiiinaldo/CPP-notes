#include<bits/stdc++.h>
using namespace std;
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl;
vector<int> TopoSort(vector<int> adj[],int n)
{
    int indegree[n] = {0};
    for(int i=0;i<n;i++)
        for(auto it: adj[i])
        indegree[it]++;
    queue<int> q;
    for(int i=0;i<n;i++)
        if(indegree[i] == 0)
            q.push(i);
    vector<int> res;
    while(!q.empty())
    {
        int node  = q.front();
        q.pop();
        res.push_back(node);
        for(auto it : adj[node])
        {
            indegree[it]--;
            if(indegree[it] == 0)
                q.push(it);
        }
    }
    return res;
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
    vector<int> resfin = TopoSort(adj,n);
    showvec(resfin);
}
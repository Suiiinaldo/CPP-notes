#include<bits/stdc++.h>
using namespace std;
bool detectCycle(vector<int> adj[],int V)
{
    int indegree[V] = {0};
    for(int i=0;i<V;i++)
        for(auto  it : adj[i])
            indegree[it]++;
    queue<int> q;
    for(int i=0;i<V;i++)
        if(indegree[i] == 0)
            q.push(i);
    int count = 0;
    while(!q.empty())
    {
        int node  = q.front();
        q.pop();
        count++;
        for(auto it : adj[node])
        {
            indegree[it]--;
            if(indegree[it] == 0)
                q.push(it);
        }
    }
    if(count == V)
    return false;
    return true;
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
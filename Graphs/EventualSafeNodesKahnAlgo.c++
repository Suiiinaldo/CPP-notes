#include<bits/stdc++.h>
using namespace std;
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl;
vector<int> saferNodes(vector<int> adj[],int V)
{
    int indegree[V] ={0};
    vector<int> adjRev[V];
    for(int i=0;i<V;i++)
    {
        for(auto it: adj[i])
        {
            adjRev[it].push_back(i);
            indegree[i]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++)
    {
        if(indegree[i] == 0)
        q.push(i);
    }
    vector<int> res;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        res.push_back(node);
        for(auto it : adjRev[node])
        {
            indegree[it]--;
            if(indegree[it] == 0)
                q.push(it);
        }
    }
    sort(all(res));
    return res;
}
int main()
{
    int V,e;
    cin>>V>>e;
    vector<int> adj[V];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int> safeNodes = saferNodes(adj,V);
    showvec(safeNodes);
}
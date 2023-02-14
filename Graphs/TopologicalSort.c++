#include<bits/stdc++.h>
using namespace std;
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl;
void dfs(int node,vector<int> adj[],stack<int> &st,int vis[])
{
    vis[node] = 1;
    for(auto it: adj[node])
    {
        if(!vis[it])
            dfs(it,adj,st,vis);
    }
    st.push(node);
}
vector<int> TopoSort(vector<int>adj[],int n)
{
    int vis[n] = {0};
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        dfs(i,adj,st,vis);
    }
    vector<int> resfin;
    while(!st.empty())
    {
        resfin.push_back(st.top());
        st.pop();
    }
    return resfin;
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
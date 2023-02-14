#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:
    unordered_map<int, vector<int>> adj;
    void addEdge(int u, int v, bool dir)
    {
        adj[u].push_back(v);
        if(!dir)
        {
            adj[v].push_back(u);
        }
    }
    void print()
    {
        for(auto i:adj)
        {
            cout<<i.first<<" : ";
            for(auto j: i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    cout<<"Enter the Number of Nodes\n";
    int n,m;
    cin>>n;
    cout<<"Enter the Number of Edges\n";
    cin>>m;
    graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);/* 0 for undirected and 1 for directed*/
    }
    g.print();
    return 0;
}
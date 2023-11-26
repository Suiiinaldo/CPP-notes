#include<bits/stdc++.h>
using namespace std;
vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,
    greater<pair<int,int>>> pq;
    pq.push({0,S});
    vector<int> dis(V);
    for(int i=0;i<V;i++)
    dis[i] = 1e9;
    dis[S] = 0;
    while(!pq.empty())
    {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it : adj[node])
        {
            int edgeWeight = it[1];
            int edge = it[0];
            if(dist + edgeWeight < dis[edge])
            {
                dis[edge] = dist+ edgeWeight;
                pq.push({dis[edge],edge});
            }
        }
    }
    return dis;
}
int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<int>> adj[V];
    int i=0;
    for(int i = 0;i<E;i++) 
    {
        int u, v, w;
        cin >> u >> v >> w;
        vector<int> t1,t2;
        t1.push_back(v);
        t1.push_back(w);
        adj[u].push_back(t1);
        t2.push_back(u);
        t2.push_back(w);
        adj[v].push_back(t2);
    }
    int S;
    cout<<"Enter the Starting Node\n";
    cin>>S;
    vector<int> res = dijkstra(V, adj, S);
    for(int i=0; i<V; i++)
        cout<<"Distance of "<<i<<" from "<<S<<" is "<<res[i]<<" "<<endl;
    cout<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<pair<int,int>>> adj(n);
    for(int i=0;i<e;i++){
        int u,v,d;
        adj[u].push_back({v,d}); adj[v].push_back({u,d});
    }
    auto dij=[&](int s){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,s});
        while(!pq.empty()){
            auto [dist,node]=pq.top();pq.pop();
        }
    };
    dij(1);
}
#include<bits/stdc++.h>
using namespace std;

void aStar(vector<pair<int,int>> adj[],vector<int> &dis,int n,vector<int> &prev)
{
    priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
    pq.push({0,0});
    dis[0] = 0;
    prev[0] = -1;
    while(!pq.empty())
    {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it : adj[node])
        {
            int adjNode = it.first;
            int weight = it.second;
            if(weight + distance  < dis[adjNode])
            {
                dis[adjNode] = weight + distance;
                pq.push({dis[adjNode],adjNode});
                prev[adjNode] = node; 
            }
        }
    }    
    cout<<"Shortest Distance  = "<<dis[n-1]<<endl;
    vector<int> res;
    res.push_back(n-1);
    int temp = n-1;
    while(temp!=0)
    {
        temp = prev[temp];
        res.push_back(temp);
    }
    res.push_back(0);
    reverse(res.begin(),res.end());
    for(auto it : res)
        cout<<it<<" -> ";
    cout<<endl;
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> adj[n];
    for(int i = 0;i<e;i++)
    {
        int u,v,w,h;
        cin>>u>>v>>w>>h;
        adj[u].push_back({v,w+h});
    }
    vector<int> path;
    vector<int> dis(n,1e9);
    aStar(adj,dis,n,path);
}
/*
7 9
1 2 4 12
1 3 3 11
3 4 7 6
4 5 2 4
3 5 10 4
2 6 5 11
6 7 16 0
5 7 5 0
2 5 12 4
0 1 4 12
0 2 3 11
2 3 7 6
3 4 2 4
2 4 10 4
1 5 5 11
5 6 16 0
4 6 5 0
1 4 12 4
*/
//She ain't worth your time bro.
#include<bits/stdc++.h>
using namespace std;
vector<int> dijsktra(int node,vector<int> adj[],int n){
    vector<int> dis(n,1e9);
    dis[node] = 0;
    queue<pair<int,int>> q;
    q.push({0,node});
    while(!q.empty()){
        int dist = q.front().first;
        int node = q.front().second;
        q.pop();
        for(auto it : adj[node]){
            if(dist + 1 < dis[it]){
                dis[it] = dist + 1;
                q.push({dis[it],it});
            }
        }
    }
    return dis;

}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin >> n;
        vector<int> adj[n]; 
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>>x; 
            if(x != -1)
                adj[i].push_back(x);
        }
        int c1,c2;
        cin>>c1>>c2;
        vector<int> dist1;
        vector<int> dist2;
        dist1 = dijsktra(c1,adj,n);
        dist2 = dijsktra(c2,adj,n);
        int mini = 1e9;
        int node = 0;
        for(int i = 0;i<n;i++){
            if(dist1[i] == 1e9 or dist2[i] == 1e9)continue;
            if(mini > (dist1[i] + dist2[i]))
                mini = dist1[i] + dist2[i], node = i;
        }
        if(mini == 1e9)
            cout<< -1<<endl;
        else
            cout<<node<<endl;
    }
    return 0;
}
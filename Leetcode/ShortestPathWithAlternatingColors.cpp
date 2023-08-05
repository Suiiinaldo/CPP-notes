//She ain't worth your time bro.
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n)
{
    primeNumbers.assign(n+1,true);
    primeNumbers[0] = primeNumbers[1] = false;
    for(int i = 2;i*i<=n;i++)
    {
        if(primeNumbers[i])
        {
            for(int j = i*i;j <= n;j += i)
                primeNumbers[j] = false;
        }
    }
}
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
class Solution {
public:
    vector<int> bfs(int n,vector<pair<int,int>> adj[])
    {
        vector<vector<bool>> vis(n,vector<bool>(2));
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{-1,0}});
        vector<int> dis(n,-1);
        dis[0] = 0;
        vis[0][0] = vis[0][1] =  true;
        while(!q.empty())
        {
            int node = q.front().first;
            int color = q.front().second.first;
            int distance = q.front().second.second;
            q.pop();
            for(auto it : adj[node])
            {
                int adjNode = it.first;
                int newColor = it.second;
                if(newColor!=color and !vis[adjNode][newColor])
                {
                    vis[adjNode][newColor] = true;
                    if(dis[adjNode] == -1) dis[adjNode] = distance + 1;
                    q.push({adjNode,{newColor,distance+1}});
                }
            }
        }
        return dis;
    }
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<pair<int,int>> adj[n];
        for(auto it : redEdges)
        {
            adj[it[0]].push_back({it[1],1});
        }
        for(auto it : blueEdges)
        {
            adj[it[0]].push_back({it[1],0});
        }
        return bfs(n,adj);
    }
}ob;
int32_t main()
{
    int n = 5;
    vector<vector<int>> redEdges = {{0,1},{1,2},{2,3},{3,4}};
    vector<vector<int>> blueEdges = {{1,2},{2,3},{3,1}};
    showvec(ob.shortestAlternatingPaths(n,redEdges,blueEdges));
    return 0;
}
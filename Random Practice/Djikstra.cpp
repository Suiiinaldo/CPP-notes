//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define showset(s) for(auto i=s.begin();i!=s.end();++i) cout<<*i<<" ";cout<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/
int n,m;
void djikstra(vector<pair<int,int>> adj[])
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,0});
    vector<int> dis(n,1e9);
    dis[0] = 0;
    while(!pq.empty())
    {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it : adj[node])
        {
            int edgeWeight = it.first;
            int adjNode = it.second;
            if(dist + edgeWeight < dis[adjNode])
            {
                dis[adjNode] = dist+ edgeWeight;
                pq.push({dis[adjNode],adjNode});
            }
        }
    }
	for(int i = 0;i<n;i++)
	{
		cout<<dis[i]<<" ";
	}
	cout<<endl;
}

void solve()
{
    cin>>n>>m;
    vector<pair<int,int>> adj[n];
    int i=0;
    while (i++ < m)
    {
        int u, v, w;
        cin>>u>>v>>w;
        u--;v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    djikstra(adj);
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t-->0)
    // {
        solve();
    // }
    return 0;
}


/*-----------------------------------WEAPONS------------------------------*/

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
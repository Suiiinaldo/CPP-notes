//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define repn(i,a,b) for(int i =a;i<b;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define showset(s) for(auto i=s.begin();i!=s.end();++i) cout<<*i<<" ";cout<<endl;
#define read(a) for(int i = 0;i<a.size();i++)cin>>a[i];
#define read1(a) for(int i = 1;i<a.size();i++)cin>>a[i];
#define ll long long
#define int long long
#define endl '\n'
#define pii pair<int,int>
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/


int djikstra(int n,vector<pair<int,int>> adj[],vector<int> &city)
{
	vector<vector<int>> dis(n+1,vector<int>(n+1,1e12));
	dis[1][1] = 0;
	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
	greater<pair<int,pair<int,int>>>>pq;
	pq.push({0,{1,1}});
	while(!pq.empty())
	{
		int dist = pq.top().first;
        int node = pq.top().second.first;
        int bike = pq.top().second.second;
        pq.pop();
		for(auto it : adj[node])
		{
			int adjnode = it.first;
			int edgeWeight = it.second;
			int newbike = adjnode;
			if(edgeWeight * city[bike] + dis[node][bike] < dis[adjnode][bike])
			{
				dis[adjnode][bike] = edgeWeight * city[bike] + dis[node][bike];
                pq.push({dis[adjnode][bike],{adjnode,bike}});
			}
			if(edgeWeight * city[bike] + dis[node][bike] < dis[adjnode][newbike])
			{
				dis[adjnode][newbike] = edgeWeight * city[bike] + dis[node][bike];
                pq.push({dis[adjnode][newbike],{adjnode,newbike}});
			}
		}
	}
    int ans = 1e12;
    for(int i = 1;i<=n;i++)
    	ans = min(ans,dis[n][i]);
    return ans;
}


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    for(int i = 0;i<m;i++){
    	int u,v,w;
    	cin>>u>>v>>w;
    	adj[u].push_back({v,w});
    	adj[v].push_back({u,w});
    }
    vector<int> cityPrices(n+1);
    read1(cityPrices);
    cout<<djikstra(n,adj,cityPrices)<<endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
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
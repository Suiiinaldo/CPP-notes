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

void Dijkstra(int V,vector<vector<int>> adj[],int S)
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
	// priority_queue<pair<int,int>,vector<pair<int,int>>,
	// greater<pair<int,int>>> pq;
    // pq.push({0,0});
    // vector<int> dis(n+1);
    // for(int i=0;i<n;i++)
    // dis[i] = 1e9;
    // dis[0] = 0;
    // map<int,pair<int,int>> mf;
    // while(!pq.empty())
    // {
    //     int dist = pq.top().first;
    //     int node = pq.top().second;
    //     pq.pop();
    //     int mini = INT_MAX,maxi = INT_MIN;
    //     for(auto it : adj[node])
    //     {
    //         int edgeWeight = it[1];
    //         int edge = it[0];
    //         mini = min(edgeWeight,dist);
	// 		maxi = max(edgeWeight,dist);
    //         if(dist + edgeWeight < dis[edge])
    //         {
    //         	mf[edge] = {mini,maxi};
    //             dis[edge] = dist+ edgeWeight;
    //             pq.push({dis[edge],edge});
    //         }
    //     }
    // }
    // vector<int> ans;
	// for(int i = 1;i<=n;i++)
	// {
	// 	int s = 0;
	// 	s+=dis[i]+mf[i].second;
	// 	s-=mf[i].first;
	// 	ans.push_back(s);
	// }
	showvec(dis);
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj[n];
    rep(m)
    {
    	int u, v, w;
        cin >> u >> v >> w;
        u -=1;v-=1;
        vector<int> t1,t2;
        t1.push_back(v);
        t1.push_back(w);
        adj[u].push_back(t1);
        t2.push_back(u);
        t2.push_back(w);
        adj[v].push_back(t2);
    }
    Dijkstra(n,adj,0);
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
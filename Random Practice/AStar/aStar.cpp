//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
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
#define endl '\n'
#define int long long
#define pii pair<int,int>
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/


void solve()
{
    /*
    Test Case
    1 
    9 14
    0 4
    0 1 4
    0 7 8
    1 7 11
    1 2 8
    7 6 1
    7 8 7
    2 8 2
    8 6 6
    2 3 7
    2 5 4
    6 5 2
    3 5 14
    5 4 10
    3 4 0
    */
    int n,e;
    cin>>n>>e;
    int start,end;
    cin>>start>>end;
    vector<pii> adj[n+1];
    while(e--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<char> node_labels(n+1);
    char z = 'A';
    for(int i = 0;i<=n;i++)
    {
        node_labels[i] = z;
        z++;
    }
    vector<int> h = {10,2,7,3,2,5,4,7};
    h[end] = 0;
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    vector<int> parent(n+1,0);
    parent[start] = -1;
    pq.push({0,start});
    vector<int> dist(n+1,1e9);
    dist[start] = 0;
    while(!pq.empty())
    {
        auto q = pq.top();
        int dis = q.first;
        int node = q.second;
        pq.pop();
        for(auto it : adj[node])
        {
            int adjNode = it.first;
            int edgW = it.second;
            int cost = dis + edgW + h[adjNode];
            int distance = dis + edgW;
            if(cost < dist[adjNode]) //condition to relax
            {
                pq.push({distance,adjNode});
                dist[adjNode] = distance;
                parent[adjNode] = node;
            }
        }
    }
    vector<int> res;
    int node = end;
    while(node != -1)
    {
        res.push_back(node);
        node = parent[node];
    }
    reverse(all(res));
    vector<char> resfin(res.size());
    for(int i = 0;i<resfin.size();i++)
    {
        resfin[i] = node_labels[res[i]];
    }
    showvec(resfin);
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
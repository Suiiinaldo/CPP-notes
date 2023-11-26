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
vector<int> cycle;
void dfs(int node,int par,vector<int> adj[],vector<int> &vis,vector<int> &parent)
{
	vis[node] = 1;
    parent[node] = par;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, node, adj, vis, parent);
        }
        else if (it != par and vis[it] and cycle.size() == 0)
        {
            int cur = node;
            while (cur != it)
            {
                cycle.push_back(cur);
                cur = parent[cur];
            }
            cycle.push_back(it);
            return;
        }
    }
}
int n,a,b;
vector<int> bfs(int src,vector<int> adj[])
{
    vector<int> dis(n,INT_MAX);
    queue<int> q;
    q.push(src);
    dis[src] = 0;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto it : adj[node])
        {
            if(dis[it] == INT_MAX)
            {
                dis[it] = dis[node] + 1;
                q.push(it);
            }
        }
    }
    return dis;
}

void solve()
{
    cin>>n>>a>>b;
    a-=1;b-=1;
    cycle.clear();
    vector<int> adj[n];
    vector<int> vis(n,0);
    vector<int> parent(n,-1);
    for(int i = 0;i<n;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	u--;v--;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
    }
    if(a == b)
    {
        cout<<"NO\n";
        return;
    }
    dfs(b,-1,adj,vis,parent);
    // for(int x : cycle)
    //     cout<<x<<" ";
    // cout<<endl;
    for(int x : cycle)
    {
        if(x == b)
        {
            cout<<"YES\n";
            return;
        }
    }
    vector<int> disA = bfs(a,adj);
    vector<int> disB = bfs(b,adj);
    // showvec(disA);
    // showvec(disB);
    for(int x : cycle)
    {
        if(disA[x] > disB[x])
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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
//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define repn(i,n) for(int i =0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define showset(s) for(auto i=s.begin();i!=s.end();++i) cout<<*i<<" ";cout<<endl;
#define ll long long
#define endl '\n'
// #define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/
int mod = 998244353;
void dfs(int node,vector<pair<int,int>> adj[],vector<int> &z)
{
    for(auto it : adj[node])
    {
    	z.push_back(it.second);
    	dfs(it.first,adj,z);
    }
}

void solve()
{
    int n;
    cin>>n;
    int m = n;
    m-=1;
    vector<pair<int,int>> adj[n];
    int count = 0;
    while(m-->=0)
    {
    	int directedAway;
    	cin>>directedAway;
    	for(int i = 0;i<directedAway;i++)
    	{
    		int v,w;
    		cin>>v>>w;
    		v-=1;
    		adj[count].push_back({v,w});
    	}
    	count++;
    }
    // for(int i = 0;i<n;i++)
    // {
    // 	for(auto it : adj[i])
    // 	{
    // 		cout<<i<<" ->"<<it.first<<endl;
    // 	}
    // }
    vector<int> z;
    dfs(0,adj,z);
    // showvec(z);
    int countZero = 0;
    int res = 0;
    for(int i = z.size()-1;i>=0;i--)
    {
    	if(z[i] == 0)
    		countZero++;
    	else
    	{
    		res+=countZero;
    		res%=mod;
    	}
    }
    cout<<res<<endl;
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
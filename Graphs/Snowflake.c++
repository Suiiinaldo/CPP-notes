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
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/
int n,m;
vector<int> count(vector<int> adj[],int s)
{
	vector<int> vis(n+1,0);
	queue<pair<int,int>> q;
	q.push({0,s});
	vector<int> ans;
	vis[s] = 1;
	int countVis = 1;
	int level1 = 0;int level2 = 0;
	while(!q.empty())
	{
		int level = q.front().first;
		int node = q.front().second;
		q.pop();
		if(level == 1)
		{
			level1++;
		}
		else if(level == 2)
		{
			level2++;
		}
		for(auto it : adj[node])
		{
			if(!vis[it])
			{
				vis[it] = 1;
				countVis++;
				q.push({level+1,it});
			}
		}
	}
	ans.push_back(level1);
	ans.push_back(level2);
	ans.push_back(countVis);
}

void solve()
{
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i =0;i<m;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
    }
    int x = 0;int y = 0;
    for(int i = 1;i<=n;i++)
    {
    	vector<int> ans = count(adj,i);
    	if(ans[2] == n)
    	{
    		x = ans[0];
    		y = ans[1];
    	}
    }
    cout<<x<<" "<<y<<endl;
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
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
class DSU
{
    public:
    vector<int> parent,size;
    DSU(int n)
    {
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i = 0;i<=n;i++)
            parent[i] = i;
    }
    int findParent(int node)
    {
        if(parent[node] == node)
            return node;
        return  parent[node] = findParent(parent[node]);
    }
    void UnionBySize(int u,int v)
    {
        int ultParent_u = findParent(u);
        int ultParent_v = findParent(v);
        if(ultParent_u == ultParent_v)return;
        if(size[ultParent_u] < size[ultParent_v])
        {
            parent[ultParent_u] = ultParent_v;
            size[ultParent_v]+=size[ultParent_u];
        }
        else
        {
            parent[ultParent_v] = ultParent_u;
            size[ultParent_u]+=size[ultParent_v];
        }
    }
};


void solve()
{
	int n,m;
	cin>>n>>m;
	DSU ds(n+1);
	set<int> set;
	for(int i = 0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		if(ds.findParent(u)!=ds.findParent(v))
		{
			ds.UnionBySize(u,v);
		}
	}
    for(int i = 0;i<n+1;i++)
    {
        set.insert(ds.parent[i]);
    }
    cout<<set.size()-1<<endl;
	int a = *set.begin();
    for(auto it : set)
    {
        if(it == a)
            continue;
        else
            cout<<a<<" "<<it<<endl;
    }
}

int32_t main()
{
	solve();
}
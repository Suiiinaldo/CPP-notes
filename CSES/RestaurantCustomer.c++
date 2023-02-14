#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(n) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    unordered_map<int,int> arrFreq;
    unordered_map<int,int> exitFreq;
    for(int i =0 ;i<n;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	arrFreq[x]++;
    	exitFreq[y]++;
    	v.push_back({x,y});
    }
    sort(all(v));
    int maxguest = 0;int zx = 0;
    for(int i = 0;i<n;i++)
    {
    	zx+=arrFreq[v[i].first];
    	if(i)
    	{
    		if(v[i-1].second<=v[i].first)
    			zx-=exitFreq[v[i].second];
    	}
    	maxguest = max(maxguest,zx);
    }
    cout<<maxguest<<endl;
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
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> h(n);
    vector<int> s(n);
    for(int i=0;i<n;i++)
    cin>>h[i];
    for(int i=0;i<n;i++)
    cin>>s[i];
    vector<pair<int,int>> finala;
    map<int,int> f;
    for(int i=0;i<n;i++)
    {
        finala.push_back({i,h[i]+s[i]});
        f[i] = s[i];
    }
    // showmap(f);
    sort(all(finala));
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans+=finala[i].second;
    }
    int zx = *max_element(all(s));
    // cout<<" "<<zx<<endl;
    // int zx = it->second;
    ans-=zx;
    cout<<ans<<endl;
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
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> v;
    for(int i=0;i<2*n;i++)
    {
        ll z;
        cin>>z;
        v.push_back(z);
    }
    // showvec(v);
    sort(all(v));
    bool ok=true;
    for(int i=0;i<n;i++)
    {
        if(v[n+i]-v[i]<x)
        ok=false;
    }
    if(ok)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
int main()
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
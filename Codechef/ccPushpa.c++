#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v;
    map<ll,ll> f;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
        f[x]++;
    }
    if(n==1)
    cout<<v[0]<<endl;
    else
    {
        sort(all(v));
        ll resfin=0;
        for(auto i=f.begin();i!=f.end();++i)
        {
            ll zxc=i->first+i->second;
            zxc-=1;
            resfin=max(resfin,zxc);
        }
        cout<<resfin<<endl;
    }
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
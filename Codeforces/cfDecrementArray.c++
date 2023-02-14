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
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int f=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]>a[i])
        f=1;
    }
    ll zxc=INT_MIN;
    for(ll i=0;i<n;i++)
        zxc=max(zxc,a[i]-b[i]);
    for(ll i=0;i<n;i++)
        a[i]=max(0LL,a[i]-zxc);
    if(a!=b or f==1)
    cout<<"NO\n";
    else
    cout<<"YES\n";
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
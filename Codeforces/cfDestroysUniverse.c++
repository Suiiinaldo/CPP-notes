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
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll c=0;ll zeroc=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0)
        zeroc++;
    }
    if(zeroc==n)
    cout<<"0\n";
    else if(((v[0]==0 or v[n-1]==0) and zeroc==1) or (n==1 and zeroc==0) or (v[0]==0 and v[n-1]==0 and zeroc==2))
    cout<<"1\n";
    else
    cout<<2<<endl;
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
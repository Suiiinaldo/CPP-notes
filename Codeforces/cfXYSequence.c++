#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define ll long long
using namespace std;
void solve()
{
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    vector<ll> v(a+1);
    v[0]=0;
    for(int i=1;i<a+1;i++)
        v[i]=(max(v[i-1]+x,v[i-1]-y)<=b)?max(v[i-1]+x,v[i-1]-y):min(v[i-1]+x,v[i-1]-y);
    ll sum=0;
    for(int i=0;i<a+1;i++)
    sum+=v[i];
    cout<<sum<<endl;
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
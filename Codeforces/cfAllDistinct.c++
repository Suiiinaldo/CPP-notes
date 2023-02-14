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
    vector<ll>v(n);
    map<ll,ll>f;
    set<ll>s;
    rep(n)
    {
        cin>>v[i];
        f[v[i]]++;
        s.insert(v[i]);
    }
    int zx=s.size();
    int cx=n-zx;
    if(cx%2!=0)
    zx-=1;
    cout<<zx<<endl;

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
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
    vector<pair<int,int>> alarm;
    ll h,m,n;
    cin>>n>>h>>m;
    int ans=1500;
    int xc=h*60+m;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        int zx=x*60+y;
        zx=zx-xc;
        if(zx<0)
        zx+=1440;
        ans=min(ans,zx);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
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
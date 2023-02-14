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
    double n,l;
    cin>>n>>l;
    vector<double> v(n);
    rep(n)
    cin>>v[i];
    sort(all(v));
    double maxdist=INT_MIN;
    rep(n-1)
        maxdist=max(maxdist,v[i+1]-v[i]);
    double ans=max(maxdist/2.0,max(v[0]-0,l-v[n-1]));
    cout<<fixed<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t=1;
    while(t-->0)
    {
        solve();
    }
    return 0;
}
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
    ll n,k;
    cin>>n>>k;
    vector<char> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> w(n+1);
    w[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i-1]=='W')
            w[i]+=w[i-1]+1;
        else
            w[i]=w[i-1];
    }
    int ans=INT_MAX;
    for(int i=k;i<=n;i++)
    {
        ans=min(ans,w[i]-w[i-k]);
    }
    cout<<ans<<endl;
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
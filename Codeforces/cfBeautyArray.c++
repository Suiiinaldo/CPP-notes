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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    if((s-(b*k))/k>n-1)
    {
        cout<<"-1\n";
        return;
    }
    cout<<b*k<<" ";
    int remaining = s-(b*k);
    for(int i=0;i<n-1 and remaining>=0;i++)
    {
        cout<<remaining/k-1<<" ";
        remaining-=k-1;
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
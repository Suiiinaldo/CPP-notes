#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
    ll x,y;
    cin>>x>>y;int ans=2;
    int zxc=x*x+y*y;int z;
    for(z=0;z*z<zxc;z++);
    if(z*z==zxc)
    ans=1;
    if(x==0 and y==0)
    ans=0;
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
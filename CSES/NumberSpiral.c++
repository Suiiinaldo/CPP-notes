#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        if(y & 1)
        {
            int zx = y*y;
            cout<<zx-x+1<<endl;
        }
        else
        {
            int zx = (y-1)*(y-1) + 1;
            cout<<zx+x-1<<endl;
        }
    }
    else
    {
        if(x & 1)
        {
            int zx = (x-1)*(x-1) + 1;
            cout<<zx+y-1<<endl;
        }
        else
        {
            int zx = x*x;
            cout<<zx-y+1<<endl;
        }
    }
}
int32_t main()
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
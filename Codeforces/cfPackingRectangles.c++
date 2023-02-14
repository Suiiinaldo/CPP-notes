#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
int w,h,n;
bool check(int k)
{
    return ((k/h) * (k/w) >= n);
}
void solve()
{
    cin>>w>>h>>n;
    int  l = 0, r = 2,mid;
    while(!check(r))r*=2;
    while(r > (l+1))
    {
        mid = (l+r) /2;
        if(check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout<<r<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t-->0)
    // {
        solve();
    // }
    return 0;
}
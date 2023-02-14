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
int n,k;
vector<int> v;
bool check(double a)
{
    int sum = 0;
    for(int i = 1; i<=n;i++)
    {
        sum+=v[i]/a;
    }
    return (sum>=k);
}
void solve()
{
    cin>>n>>k;
    v.assign(n+1,0);
    for(int i = 1;i <=n;i++)
    {
        cin>>v[i];
    }
    double l = 0,r = 1e12,mid;
    for(int i = 0;i<100;i++)
    {
        mid = (l + r) / 2;
        if(check(mid))
        l = mid;
        else
        r = mid;
    }
    cout<<setprecision(10)<<l<<endl;

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
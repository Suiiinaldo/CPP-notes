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
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    bool check = true;
    for(int i = 1; i <= n;i++)for(int j = 1; j <= m;j++)cin>>a[i][j];
    while(!(n%2))
    {
        bool check  = true;
        for(int i = 1;i <=n;i++)for(int j = 1; j <= m;j++)
        check = check && (a[i][j] == a[n-i+1][j]);

        if(check)
        n/=2;
        else break;
    }
    cout<<n<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t = 1;
    while(t-->0)
    {
        solve();
    }
    return 0;
}
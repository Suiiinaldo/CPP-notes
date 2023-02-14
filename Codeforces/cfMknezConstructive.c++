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
    int n;
    cin>>n;
    if(!(n & 1))
    {
        cout<<"YES\n";
        for(int i = 0;i<n/2;i++)
        {
            cout<<"-1 1 ";
        }
        cout<<endl;
    }
    else
    {
        if(n == 3)
        {
            cout<<"NO\n";return;
        }
        cout<<"YES\n";
        int count = 0;
        for(int i = 3;i<=n;i+=2)
        {
            count++;
        }
        int posi = count - 1;
        int negi = 0-(count);
        for(int i = 0;i<n/2;i++)
        {
            cout<<posi<<" "<<negi<<" ";
        }
        cout<<posi<<endl;
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
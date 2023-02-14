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
    int n;
    cin>>n;
    int ans = 0;
    if(n <10)
    {
        int x = n/1;
        if(n==0)
        x=1;
        ans+=x;
    }
    else if(n>=10 and n<100)
    {
        int x = n/10;
        ans+=x+9;
    }
    else if(n>=100 and n<1000)
    {
        int x = n/100;
        ans+=x+18;
    }
    else if(n>=1000 and n<10000)
    {
        int x = n/1000;
        ans+=x+27;
    }
    else if(n>=10000 and n<100000)
    {
        int x = n/10000;
        ans+=x+36;
    }
    else if(n>=100000 and n<=999999)
    {
        int x = n/100000;
        ans+=x+45;
    }
    cout<<ans<<endl;
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
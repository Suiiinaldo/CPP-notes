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
    vector<ll> v(n);
    rep(n)
        cin>>v[i];
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(i>0 and i<n-1)
        {
            int max=v[i-1]+v[i+1];
            if(v[i]>max)
            m++;
        }
    }
    if(k==1)
    cout<<(n-1)/2<<endl;
    else
    cout<<m<<endl;
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
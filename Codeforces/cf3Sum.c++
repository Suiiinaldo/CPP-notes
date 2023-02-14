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
    ll n;
    cin>>n;
    map<ll,ll> mp;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mp[x%10]++;
    }
    for(auto i=mp.begin();i!=mp.end();++i)
    {
        int y=i->second;
        int x=i->first;
        y=min(y,3);
        while(y--)
        v.push_back(x);
    }
    n=v.size();
    for(int i=0;i<n-2;++i)
    {
        for(int j=i+1;j<n-1;++j)
        {
            for(int k=j+1;k<n;++k)
            {
                int z=v[i]+v[j]+v[k];
                if(z%10==3)
                {
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
    cout<<"NO\n"<<endl;

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
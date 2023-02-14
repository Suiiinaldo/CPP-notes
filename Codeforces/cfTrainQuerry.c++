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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(auto &i:v)
    cin>>i;
    while(q--)
    {
        ll start,end;
        cin>>start>>end;
        ll startpos=-1,endpos=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==end)
            {
                endpos=i;
                break;
            }
        }
        for(int i=0;i<endpos;i++)
        {
            if(v[i]==start)
            {
                startpos=i;
                break;
            }
        }
        if(startpos>-1 and endpos>-1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
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
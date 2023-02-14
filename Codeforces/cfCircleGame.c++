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
    vector<ll>v(n);
    ll mini=INT_MAX;
    ll minipos=-1;
    rep(n)
    {
        cin>>v[i];
        if(v[i]<mini)
        {
            minipos=i;
            mini=v[i];
        }
    }
    if(n%2==0)
    {
        if(minipos%2!=0)
        cout<<"Mike"<<endl;
        else
        cout<<"Joe"<<endl;
    }
    else
    cout<<"Mike"<<endl;
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
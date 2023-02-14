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
    vector<pair<ll,ll>> v;
    for(int i=1;i<n;i++)
    {
        int j=i+1;
        if(((i+k)*j)%4==0)
        {
            v.push_back(make_pair(i,j));
            i=i+1;
        }
    }int f=0;
    for(int i=1;i<n;i++)
    {
        int j=i+1;
        if(((j+k)*i)%4==0)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i].first==j or v[i].first==i or v[i].second==j or v[i].second==i)
                f=1;
            }
            if(f==1)
            continue;
            v.push_back(make_pair(j,i));
            i=i+1;
        }
    }
    if(v.size()==0)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
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
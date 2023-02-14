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
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    if(n < m)
    {
        cout<<"NO\n";
        return;
    }
    else if(a==b)
    {
        cout<<"YES\n";
        return;
    }
    bool similar=true;
    for(int i=1;i<m;i++)
    {
        if(a[i+n-m]!=b[i])
        {
            similar=false;
            break;
        }
    }
    if(!similar)
    {
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<n-m+1;i++)
    {
        if(a[i]==b[0])
        {
            similar=false;
        }
    }
    if(similar)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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
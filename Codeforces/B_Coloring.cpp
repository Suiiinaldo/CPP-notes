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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m);
    rep(m)
    {
        cin>>v[i];
    }
    int x = n/k;
    int y = n%k;
    int flag = 0;int count = 0;
    for(int i = 0;i<m;i++)
    {
        if(v[i]>x+1)
        {
            flag = 1;
            break;
        }
        else if(v[i]>x)
        {
            count++;
        }
    }
    if(flag == 1)
    {
        cout<<"NO\n";
    }
    else if(count > y)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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
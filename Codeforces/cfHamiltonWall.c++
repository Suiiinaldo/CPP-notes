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
    string s,d;
    cin>>s>>d;
    bool entryFirst = true;
    bool entrySecond = true;
    for(int i =0;i<n;i++)
    {
        if(s[i] == 'B' and d[i] == 'B')
        swap(entryFirst,entrySecond);
        if(s[i] == 'B' and d[i] == 'W')
            entrySecond = false;
        if(s[i] == 'W' and d[i] == 'B')
            entryFirst = false;
    }
    if(entryFirst or entrySecond)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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
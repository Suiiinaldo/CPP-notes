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
    string v;
    cin>>v;
    map<string,int> f;bool flag = false;int k = 0;
    for(int i = 0;i<n-1 ;i++)
    {
        if(v[i] == v[i+1] and v[i+1] == v[i+2])
        i++;
        string d,ds,res;
        d.push_back(v[i]);
        ds.push_back(v[i+1]);
        res ="";res+= d+ds;
        if(f.find(res)==f.end())
        f.insert({res,1});
        else
        flag = true;
    }
    // showmap(f);
    if(flag)
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
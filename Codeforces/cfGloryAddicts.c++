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
    vector<int> type(n);
    vector<int> frost;
    vector<int> fire;
    for(int i=0;i<n;i++)
    {
        cin>>type[i];
    }
    rep(n)
    {
        int x;
        cin>>x;
        if(type[i] == 0)
        fire.push_back(x);
        else
        frost.push_back(x);
    }
    sort(all(frost));
    sort(all(fire));
    int ans=0;
    int firstSmaller = 0;
    if(fire.size() == frost.size())
    {
        firstSmaller = min(fire[0],frost[0]);
    }
    while(fire.size() and frost.size())
    {
        ans+=*fire.rbegin()*2 + *frost.rbegin()*2;
        fire.pop_back();frost.pop_back();
    }
    if(fire.size())
    {
        for(int i=0;i<fire.size();i++)
        ans+=fire[i];
    }
    if(frost.size())
    for(int i =0;i<frost.size();i++)
    ans+=frost[i];
    ans-=firstSmaller;
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
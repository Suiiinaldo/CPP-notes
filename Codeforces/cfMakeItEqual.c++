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
    int n,h;
    cin>>n>>h;
    vector<int> v(n);
    rep(n)
    {
        cin>>v[i];
    }
    int maxi = *max_element(all(v));
    int mini = *min_element(all(v));
    vector<int> suff(maxi+2);
    for(int i =0;i<n;i++)
    suff[v[i]]++;
    for(int i =maxi;i>=mini;i--)
    {
        suff[i]+=suff[i+1];
    }
    int ans = 0,count = 0;
    for(int i =maxi;i>mini;i--)
    {
        if(count+suff[i]>h)
        {
            ans++;
            count = 0;
        }
        count+=suff[i];
    }
    if(count!=0)ans++;
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t-->0)
    // {
        solve();
    // }
    return 0;
}
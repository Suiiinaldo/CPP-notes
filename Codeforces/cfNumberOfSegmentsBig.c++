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
    int n,s;
    cin>>n>>s;
    vector <int> arr(n);
    rep(n)
    {
        cin>>arr[i];
    }
    int sum = 0;int ans = 0;
    int i = 0, j = 0;
    while(j <= n and i <= n)
    {
        if(sum<=s-1)
        {
            ans+=j-i;
            sum+=arr[j];
            j++;
        }
        else
        {
            sum-=arr[i];
            i++;
        }
    }
    int res = (n*(n+1)/2) - ans;
    cout<<res<<endl;
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
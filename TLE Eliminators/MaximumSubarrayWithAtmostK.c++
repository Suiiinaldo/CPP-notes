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
bool possible(int mid, vector<int> &v,int k)
{
    int sum = 0;
    for(int i = 0;i<mid;i++)
    {
        sum+=v[i];
    }
    if(sum<=k)
    return true;
    for(int right = mid;right <v.size();right++)
    {
        sum+=v[right];
        sum-=v[right-mid];
        if(sum<=k)
        return true;
    }
    return false;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int > v(n);
    rep(n)
    {
        cin>>v[i];
    }
    int start = 0;
    int end = n;
    int ans = 0;
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(possible(mid,v,k))
        {
            ans = max(ans,mid);
            start = mid+1;
        }
        else
        end = mid - 1;
    }
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
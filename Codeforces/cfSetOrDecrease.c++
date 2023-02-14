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
int n,k;
vector<int> v;
vector<int> prefix;
bool check(int a)
{
    for(int i = n-1;i>=1;i--)
    {
        int x = a - (n-i);
        if(x<0)continue;
        int sum = prefix[i-1]- prefix[0] + (v[0] - x)*(n-i+1);
        if(sum<=k)
            return true;
    }
    return false;

}
void solve()
{
    cin>>n>>k;
    v.assign(n,0);
    prefix.assign(n,0);
    rep(n)
    {
        cin>>v[i];
    }
    sort(all(v));
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=v[i];
        prefix[i] = sum;
    }
    if(sum<=k)
    {
        cout<<"0\n";return;
    }
    int ans = sum-k;
    int low = 0,high = ans,mid;
    while(low<=high)
    {
        mid = (high + low) / 2;
        if(check(mid))
        {
            ans = min(ans,mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
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
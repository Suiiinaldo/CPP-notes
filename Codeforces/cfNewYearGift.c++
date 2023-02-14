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
vector<vector<int>> shop;
int n,m;
bool check(int mid)
{
    vector<int>vec(n+1,0);
    bool flag=0;
    for(int i=1;i<=m;i++)
    {
       int cnt=0;
       for(int j=1;j<=n;j++)
       {
           if(shop[i][j]>=mid)vec[j]=1,cnt++;
       }
       if(cnt>=2)flag=true;
    }
    for(int i = 1;i<=n;i++)
    {
       if(vec[i]==0)
       {
           return false;
       }
    }
   return flag;
}
void solve()
{
    cin>>m>>n;
    shop.clear();
    shop.resize(m+1);
    for(int i = 1;i<=m;i++)
    {
       shop[i].resize(n+1);
       for(int j = 1;j<=n;j++)
       {
           cin>>shop[i][j];
       }
    }
    int low = 1,high = 1e9;
    while(low<high)
    {
        int mid = (low+high+1)/2;
        if(check(mid))
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<low<<endl;
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
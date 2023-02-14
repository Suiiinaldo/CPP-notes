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
    string s;
    cin>>s;
    int maxi = INT_MIN;int zx = 0;
    for(int i = 0;i<s.length()-1;i++)
    {
        if(s[i] == s[i+1])
        {
            zx++;
        }
        else
        {
            zx+=1;
            maxi = max(maxi,zx);
            zx = 0;
        }
    }
    zx+=1;
    maxi = max(zx,maxi);
    cout<<maxi<<endl;
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
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
    int n,m;
    cin>>n>>m;
    map<int, int> mp;int x,y,a,b,pos,ans;
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            a = min (x, y);
            b = max (x, y);
            if (mp.find(a) != mp.end()) {
                mp[a] = min(mp[a], b);
            }
            else {
                mp[a] = b;
            }
        }
        pos = n+1;
        ans = 0;
        for (int i = n; i >= 1; i--) {
            if (mp.find(i) != mp.end()) {
                pos = min (pos, mp[i]);
            }
            ans += (pos-i);
        }
        cout << ans << '\n';
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
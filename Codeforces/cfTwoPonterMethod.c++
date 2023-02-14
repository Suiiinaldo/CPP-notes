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
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    rep(n)
        cin>>a[i];
    rep(m)
        cin>>b[i];
    int i = 0,j = 0,count = 0;
    while(i<n and j<m)
    {
        if(a[i] == b[j])
        {
            int c1 = 0,c2 = 0,t = a[i];
            while(a[i] == t and i<n)
            {
                c1++;
                i++;
            }
            while(b[j] == t and j<m)
            {
                c2++;
                j++;
            }
            count+=(c1*c2);
        }
        else if(a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<count<<endl;
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
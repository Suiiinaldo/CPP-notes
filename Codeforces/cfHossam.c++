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
    int n;
    cin>>n;
    vector<int> v(n);
    rep(n)
    {
        cin>>v[i];
    }
    sort(all(v));
    int start = 0,end = n-1;
    if(v[0] == v[end])
    {
        cout<<n*(n-1)<<endl;
    }
    else
    {
        int c1 = 0,c2 = 0;
        while(start<n and v[start] == v[0])
        {
            c1++;start++;
        }
        while(end>=0 and v[end] == v[n-1])
        {
            c2++;end--;
        }
        cout<<2*c1*c2<<endl;
    }

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
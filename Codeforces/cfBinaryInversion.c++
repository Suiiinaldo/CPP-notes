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
int countP(vector<int> v)
{
    int ones = 0;
    for(int i = v.size()-1;i>=0;i--)
    {
        if(v[i] == 1)
        ones++;
    }
    int count = 0;
    for(int i = v.size()-1;i>=0;i--)
    {
        if(v[i] == 0)
        count+=ones;
        else
        ones--;
    }
    return count;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    rep(n)
    {
        cin>>v[i];
    }
    vector<int> copyStart = v;
    vector<int> copyEnd = v;
    for(int i = 0 ;i<n;i++)
    {
        if(v[i] == 0)
        {
            copyStart[i] = 1;
            break;
        }
    }
    for(int i = n-1 ;i>=0;i--)
    {
        if(v[i] == 1)
        {
            copyEnd[i] = 0;
            break;
        }
    }
    int ini = countP(v);
    int st = countP(copyStart);
    int en = countP(copyEnd);
    cout<<max(ini,max(st,en))<<endl;
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
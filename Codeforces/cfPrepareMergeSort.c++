//She ain't worth your time bro.
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
int n,x;
vector<int> a;
void solve()
{
    cin>>n;
    vector<vector<int>> res(n);
    a.assign(n,0);
    set<int> s;
    map<int,int> m;
    rep(n)
    {
        cin>>a[i];
    }
    int j = 0;
    for(int i = 0;i<n;i++)
    {
        auto it = s.lower_bound(a[i]);
        if(it != s.begin())
        {
            it--;
            int k = m[*it];
            res[k].push_back(a[i]);
            m[a[i]]  = k;
            s.erase(*it);
            m.erase(*it);
            s.insert(a[i]);
        }
        else
        {
            m[a[i]] = j;
            res[j].push_back(a[i]);
            s.insert(a[i]);
            j++;
        }
    }
    for(int i =0;i<res.size();i++)
    {
        // if(res[i][0] == 0)
        // continue;
        for(int j = 0;j<res[i].size();j++)
        {
            // if(res[i][j] == 0)
            // continue;
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    // cin>>t;
    t = 1;
    while(t-->0)
    {
        solve();
    }
    return 0;
}
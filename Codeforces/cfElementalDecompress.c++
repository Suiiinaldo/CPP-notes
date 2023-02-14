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
    vector<int> a(n);
    rep(n)
    {
        cin>>a[i];
    }
    map<int, int> mapP, mapQ;
    vector<int> p(n,0), q(n,0);
    set<int> setP, setQ;
    for(int i = 1; i<=n; i++)
    {
        setP.insert(i);
        setQ.insert(i);
    }
    for(int i = 0; i<n; i++)
    {
        if(mapP.find(a[i]) == mapP.end())
        {
            p[i] = a[i];
            mapP[a[i]]++;
            setP.erase(a[i]);
        }
        else if(mapQ.find(a[i]) == mapQ.end())
        {
            q[i] = a[i];
            mapQ[a[i]]++;
            setQ.erase(a[i]);
        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }
    rep(n)
    {
        if(p[i] == 0 and mapP.find(q[i]) == mapP.end())
        {
            p[i] = q[i];
            setP.erase(p[i]);
        }
        else if(q[i] == 0 and mapQ.find(p[i]) == mapQ.end())
        {
            q[i] = p[i];
            setQ.erase(q[i]);
        }
    }
    rep(n)
    {
        if(p[i] == 0)
        {
            auto it = setP.lower_bound(q[i]);
            if(it != setP.begin())
            {
                it--;
                p[i] = *it;
                setP.erase(p[i]);
            }
            else
            {
                cout<<"NO\n";
                return;
            }
        }
        else if(q[i] == 0)
        {
            auto it = setQ.lower_bound(p[i]);
            if(it != setQ.begin())
            {
                it--;
                q[i] = *it;
                setQ.erase(q[i]);
            }
            else
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout <<"YES\n";
    showvec(p);
    showvec(q);
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
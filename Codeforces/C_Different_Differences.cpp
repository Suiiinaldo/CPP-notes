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
    int k,n;
    cin>>k>>n;
    if(k == n)
    {
        rep(n)
        cout<<i+1<<" ";
        cout<<endl;
    }
    else
    {
        vector<int> v;
        v.push_back(1);
        int next = 1;int current = 1;int size = 1;
        while(current+next<=n)
        {
            if(size == k)
            break;
            v.push_back(current+next);
            current = current+next;
            next++;
            size++;
        }
        unordered_map<int,int> m;int zx = 1;
        for(int i = 0;i<v.size();i++)
        {
            m.insert({v[i],zx++});
        }
        int val = n;
        while(v.size()<k)
        {
            if(m.find(val) == m.end())
            {
                v.push_back(val);
                m.insert({val,zx++});
            }
            val--;
        }
        sort(all(v));
        showvec(v);
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
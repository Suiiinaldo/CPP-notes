#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<m;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void solve()
{
    int m,s;
    cin>>m>>s;
    int sum = 0;
    vector<int> v;
    map<int,int> f;
    rep(m)
    {
        int x;
        cin>>x;
        v.push_back(x);
        f[x]++;
        sum+=x;
    }
    sum+=s;
    int k = 0;
    while((k*(k+1))/2 <=sum)
    {
        if((k*(k+1))/2 == sum)
        {
            break;
        }
        k++;
    }
    sort(all(v));
    int sum2 = 0;int zx = 0;bool flag = true;
    for(auto it = f.begin();it!=f.end();it++)
    {
        if(it->second != 1)
        flag = false;
    }
    for(int i=1;i<=k;i++)
    {
        if(f.find(i)==f.end())
        {
            sum2+=i;
        }
    }
    if(sum2 == s and flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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
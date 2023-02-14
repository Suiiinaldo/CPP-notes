#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    rep(n)
    {
        cin>>a[i];
    }
    ll dif=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            else
            {
                ll temp=0;string zxc=a[i],cxz=a[j];
                for(int k=0;k<m;k++)
                {
                    temp+=abs((int)zxc[k]-(int)cxz[k]);
                }
                dif=min(dif,temp);
            }
        }
    }
    cout<<dif<<endl;
}
int main()
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
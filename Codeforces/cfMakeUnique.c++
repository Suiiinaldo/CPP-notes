#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<int> v(n);
    unordered_map<int,int> f;
    map<int,int> as;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        f[v[i]]++;
    }
    int c=0,a=0,k=0;
    for(int i=n-1;i>=0;i--)
    {
        if(as.find(v[i])!=as.end())
        break;
        else if(f[v[i]]==1)
        c++;
        else if(f[v[i]]>1)
        {
            c++;
            f[v[i]]-=1;
            as.insert({v[i],k++});
        }
    }
    // showmap(f);
    cout<<n-c<<endl;
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
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
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> f;
    rep(n)
    {
        cin>>v[i];
        f[v[i]]++;
    }
    sort(all(v));
    if(f.size() == 1 and v[n-1]!=1)
    {
        cout<<"0\n";
        return;
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(f[i]<1 and f[i+1]>2)
        {
            int x = f[i+1]-2;
            f[i]+=x;
            f[i+1]-=x;
            k++;
        }
        if(f[i]>=2)
        k++;
    }
    cout<<k+1<<endl;
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
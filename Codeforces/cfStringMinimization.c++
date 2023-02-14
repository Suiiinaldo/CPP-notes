#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<char> res(m);
    for(int i=0;i<m;i++)
    {
        res[i]='B';
    }
    // showvec(res);
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        int z=m+1-v[i];
        // cout<<z<<" "<<v[i]<<endl;
        if(z<v[i])
        {
            if(res[z-1]=='A')
                res[v[i]-1]='A';
            else
                res[z-1]='A';
        }
        else if(v[i]<=z)
        {
            if(res[v[i]-1]=='A')
                res[z-1]='A';
            else
                res[v[i]-1]='A';
        }
        // showvec(res);
    }
    showvec(res);
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
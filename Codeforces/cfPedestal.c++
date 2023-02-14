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
    ll n;
    cin>>n;
    if(n%3==0)
    {
        // if(n/3-3>0)
        cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<endl;
    //     else if(n/3-2>0)
    //     cout<<n/3-1<<" "<<n/3+1<<" "<<n/3-2<<endl;
    //     else
    //     cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<endl;
     }
    else
    {
        ll zx=n%3;
        if(zx==1)
        cout<<n/3<<" "<<n/3+2<<" "<<n/3-1<<endl;
        else
        cout<<n/3+1<<" "<< n/3+2<<" "<<n/3-1<<endl;
    }
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
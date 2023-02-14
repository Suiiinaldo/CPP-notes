#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int >a(n);
    vector<int>b(m);int f=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        f*=a[i];
    }
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(all(a));
    sort(all(b));
    int gcdoffirst=a[0],gcdofsecond=b[0];
    for(int i=1;i<n+m;i++)
    {
        if(i<n)
            gcdoffirst=__gcd(gcdoffirst,a[i]);
        if(i<m)
            gcdofsecond==__gcd(gcdofsecond,b[i]);
    }
    int zxc;
    int lcmfirst=f/gcdoffirst;
    for(int i=a[n-1];i<=min(gcdofsecond,b[0]);++i)
    {
        if(i%lcmfirst==0 and gcdofsecond%i==0)
        zxc++;
    }
    cout<<zxc<<endl;
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
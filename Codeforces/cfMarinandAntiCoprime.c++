#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
#define mod(a) a%998244353;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%2!=0)
    cout<<"0\n";
    else
    {
        ll z=1;
        for(int i=1;i<=n/2;i++)
        {
            z*=i;
            z=mod(z);
        }
        z=pow(z,2);
        z=mod(z);
        cout<<z<<endl;
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
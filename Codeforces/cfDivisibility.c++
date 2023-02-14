#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll z=a/b;
    ll x=a%b;
    if(x==0)
    {
        cout<<0<<endl;
        return;
    }
    z+=1;
    z=z*b;
    cout<<z-a<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}
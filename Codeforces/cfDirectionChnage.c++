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
    int x,y,n,m;
    cin>>x>>y;
    n=max(x,y);
    m=min(x,y);
    if(m==1 and n>2)
    cout<<"-1\n";
    else if((n-1)==0 and (m-1)==0)
    cout<<"0\n";
    else
    {
        int moves=0;
        if((n+m)%2==0)
        {
            moves=2*n-2;
            cout<<moves<<endl;
        }
        else
        {
            moves=2*n-3;
            cout<<moves<<endl;
        }
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
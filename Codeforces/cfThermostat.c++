#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void solve()
{
    int l,r,x,a,b;
    cin>>l>>r>>x;
    cin>>a>>b;
    if(a == b)
    cout<<0<<endl;
    else if(abs(a-b) >= x)
    {
        cout<<"1\n";
        return;
    }
    else
    {
        if(a > b)
        swap(a,b);
        if(a-x >=l)
        {
            cout<<2<<endl;
        }
        else if(b+x <=r)
        {
            cout<<2<<endl;
        }
        else if(r - a >= x and b-l >= x)
        {
            cout<<"3\n";
        }
        else
        cout<<"-1\n";
    }
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
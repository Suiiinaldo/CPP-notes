#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void solve()
{
    int q;
    cin>>q;int count = 0;
    vector<int> v;
    int copy = q;
    for(int i = 2;i*i<=q;i++)
    {
        if( copy % i == 0)
        {
            while(copy % i == 0)
            {
                v.push_back(i);
                copy/=i;
            }
        }
    }
    if(copy!=1)
    v.push_back(copy);
    count = v.size();
    if(count <=1)
    {
        cout<<"1\n0";
    }
    else if(count == 2)
    {
        cout<<"2\n";
    }
    else
    {
        cout<<1<<endl;
        cout<<v[0]*v[1]<<endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t-->0)
    // {
        solve();
    // }
    return 0;
}
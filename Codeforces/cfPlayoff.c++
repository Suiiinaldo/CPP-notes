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
    int ones = 0;
    int zeroes = 0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < n ; i++)
    {
        if(s[i] == '0')
        zeroes++;
        else
        ones++;
    }
    int a = pow(2,ones);
    int b = pow(2,zeroes) - 1;
    int c = pow(2,n);
    for(int i = a; i <= c-b ; i++)
    cout<<i<<" ";
    return;
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
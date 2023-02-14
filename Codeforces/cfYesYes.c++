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
    map<char,int> f;
    string s;
    cin>>s;
    int n = s.length();
    string d = "";
    string first = "Yes";
    string second = "esY";
    string third = "sYe";
    if(s[0] == 'Y')
    {
        for(int i=0;i<n/3;i++)
        {
            d+=first;
        }
        for(int i=0;i<n%3;i++)
        d.push_back(first[i]);
    }
    else if(s[0] == 'e')
    {
        for(int i=0;i<n/3;i++)
        {
            d+=second;
        }
        for(int i=0;i<n%3;i++)
        d.push_back(second[i]);
    }
    else if(s[0] == 's')
    {
        for(int i=0;i<n/3;i++)
        {
            d+=third;
        }
        for(int i=0;i<n%3;i++)
        d.push_back(third[i]);
    }
    // cout<<d<<endl;
    if(d == s)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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
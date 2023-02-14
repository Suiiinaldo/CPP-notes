#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    string first="qwertyuiop";
    string second="asdfghjkl;";
    string third="zxcvbnm,./";
    char dec;
    cin>>dec;
    string s;
    cin>>s;
    string resfin="";
    for(int i=0;i<s.size();++i)
    {
        auto z=find(all(first),s[i]);
        auto zx=find(all(second),s[i]);
        auto zxc=find(all(third),s[i]);
        if(z!=first.end())
        {
            if(dec=='R' || dec=='r')
                resfin+=first[z-first.begin()-1];
            else if(dec=='L' || dec=='l')
                resfin+=first[z-first.begin()+1];
        }
        else if(zx!=second.end())
        {
            if(dec=='R' || dec=='r')
                resfin+=second[zx-second.begin()-1];
            else if(dec=='L' || dec=='l')
                resfin+=second[zx-second.begin()+1];
        }
        else if(zxc!=third.end())
        {
            if(dec=='R' || dec=='r')
                resfin+=third[zxc-third.begin()-1];
            else if(dec=='L' || dec=='l')
                resfin+=third[zxc-third.begin()+1];
        }
    }
    cout<<resfin<<endl;
}
int main()
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
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
    string s;
    cin>>s;
    int cy=0,ce=0,cs=0;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]=='y'||s[i]=='Y') and i==0)
        cy=1;
        else if((s[i]=='e'||s[i]=='E') and i==1)
        ce=1;
        else if((s[i]=='S'||s[i]=='s') and i==2)
        cs=1;
    }
    if(cy+ce+cs==3)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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
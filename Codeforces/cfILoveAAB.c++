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
    string s;
    cin>>s;vector<int> v;int c=0;
    bool dash=(s[s.length()-1]=='B')?true:false;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        c++;
        else
        c--;
        if(c<0)
        dash=false;
    }
    if(dash)
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
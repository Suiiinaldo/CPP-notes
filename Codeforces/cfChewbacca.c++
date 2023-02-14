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
    cin>>s;
    string d=s;int i;
    if(s[0]=='9')
    i=1;
    else
    i=0;
    for(;i<s.length();i++)
    {
        if(s[i]>='5' and s[i]<='9')
        {
            int n=s[i]-'0';
            n=9-n;
            s[i]=n+'0';
        }
    }
    cout<<s<<endl;
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
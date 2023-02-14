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
bool repe(string s)
{
    int c=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        c=1;
    }
    if(c==1)
    return true;
    else
    return false;
}
void solve()
{
    string s;
    cin>>s;
    int counte=1;
    int n=s.length();
    if(s.length()<=3)
    {cout<<"1\n";return;}
    char a=s[0];char b,c;
    for(int i=0;i<n;i++)
    {
        if(a!=s[i])
        {
            b=s[i];
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a!=s[i] and b!=s[i])
        {
            c=s[i];
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!=a and s[i]!=b and s[i]!=c)
        {
            counte++;
            a=s[i];
            b=s[i+1];
            c=s[i+2];
            // cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    if(repe(s))
    cout<<counte-1<<endl;
    else
    cout<<counte<<endl;
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
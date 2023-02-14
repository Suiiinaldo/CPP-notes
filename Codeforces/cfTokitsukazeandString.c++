#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=0;
    vector<string> v;
    string d="",a="";int c=0;
    for(int i=0;i<n-1;i++)
    {
        a=s[i];
        a+=s[i+1];
        // cout<<a<<endl;
        if(a=="01" or a=="10")
        c+=1;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        d+=s[i];
        else
        {
            d+=s[i];
            v.push_back(d);
            d="";
        }
    }
    for(int i=0;i<v.size();++i)
    {
        if(v[i].size()%2!=0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"0\n";
    else
    cout<<c<<endl;
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
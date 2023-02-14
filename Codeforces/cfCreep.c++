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
    ll a,b;
    cin>>a>>b;
    string s="";
    // if(abs(a-b)==1)
    // {
    //     if(a>b)
    //     {
    //         for(int i=0;i<b;++i)
    //         {
    //             s+="01";
    //         }
    //         s+="0";
    //     }
    //     else
    //     {
    //         for(int i=0;i<a;++i)
    //         {
    //             s+="01";
    //         }
    //         s+="1";
    //     }
    //     cout<<s<<endl;
    // }
    // else
    if(a==b)
    {
        for(int i=0;i<a;i++)
        {
            s+="01";
        }
        cout<<s<<endl;
    }
    else
    {
       if(a>b)
        {
            for(int i=0;i<b;++i)
            {
                s+="01";
            }
            for(int i=0;i<(a-b);++i)
            s+="0";
        }
        else
        {
            for(int i=0;i<a;++i)
            {
                s+="01";
            }
            for(int i=0;i<b-a;i++)
            s+="1";
        }
        cout<<s<<endl;
    }
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
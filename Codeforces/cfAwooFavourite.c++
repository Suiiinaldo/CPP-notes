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
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int acoa=count(all(a),'a');
    int acob=count(all(a),'b');
    int acoc=count(all(a),'c');
    int bcoa=count(all(b),'a');
    int bcob=count(all(b),'b');
    int bcoc=count(all(b),'c');
    if(acoa!=bcoa or acob!=bcob or acoc!=bcoc)
    {
        cout<<"NO\n";
        return;
    }
    else if(a==b)
    {
        cout<<"YES\n";
        return;
    }
    int j=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]=='b')
        continue;
        while(b[i]=='b')
        j+=1;
        if((a[i]!=b[j]) or (a[i]=='a' and i>j) or (a[i] =='c' and i<j))
        {
            cout<<"NO\n";
            return;
        }
        j+=1;
    }
    cout<<"YES\n";
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
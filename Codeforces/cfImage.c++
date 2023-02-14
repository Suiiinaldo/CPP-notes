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
    char a,b,c,d;
    cin>>a>>b>>c>>d;
    string s="";
    s+=a;
    s+=b;
    s+=c;
    s+=d;
    sort(all(s));
    int dup=0;
    vector<int> v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == s[i+1])
        {
            dup+=1;
        }
        else
        {
            v.push_back(dup);
            dup=0;
        }
    }
    if(v.size()==1)
    {
        cout<<"0\n";
    }
    else if(v.size() == 2)
    {
        cout<<1<<endl;
    }
    else if(v.size()==3)
    {
        cout<<2<<endl;
    }
    else
    cout<<3<<endl;
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
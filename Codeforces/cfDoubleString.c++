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
    int n;
    cin>>n;
    string res="";
    // vector<string> re;
    map<string, int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp.insert({s,i});
        // re.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        res+="0";
    }
    // showmap(mp);
    for(auto k=mp.begin();k!=mp.end();++k)
    {
        string str=k->first;int f=0;int zx=k->second;
        for (int i = 1; i < str.length(); i++)
        {
            string sub= str.substr(0, i);
            string subse=str.substr(i,str.length());
            // cout<<sub<<" "<<subse<<endl;
            if(mp.find(sub)!=mp.end() and mp.find(sub)!=k and mp.find(subse)!=mp.end())
            {
                // cout<<sub<<" "<<subse<<endl;
                res[zx]='1';f=1;goto abc;
            }
        }
        abc:
        if(f==0)
        res[zx]='0';
    }
    cout<<res<<endl;
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
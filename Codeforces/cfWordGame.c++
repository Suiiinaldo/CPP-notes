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
    map<string,int> f;
    int a=0,b=0,c=0;
    int n;
    cin>>n;
    vector<vector<string>> vf;
    for(int i=0;i<3;i++)
    {
        vector<string> layer;
        for(int j=0;j<n;j++)
        {
            string s;
            cin>>s;
            layer.push_back(s);
            f[s]++;
        }
        vf.push_back(layer);
    }
    vector<string> first= vf[0];
    vector<string> second= vf[1];
    vector<string> third= vf[2];
    for(int i=0;i<vf[0].size();i++)
    {
        if(f[first[i]]==1)
        a+=3;
        else if(f[first[i]]==2)
        a+=1;
    }
    for(int i=0;i<vf[1].size();i++)
    {
        if(f[second[i]]==1)
        b+=3;
        else if(f[second[i]]==2)
        b+=1;
    }
    for(int i=0;i<vf[2].size();i++)
    {
        if(f[third[i]]==1)
        c+=3;
        else if(f[third[i]]==2)
        c+=1;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
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
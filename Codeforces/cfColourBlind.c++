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
    int m;
    cin>>m;
    vector<vector<char>> ar;
    for(int i=0;i<2;i++)
    {
        vector<char> layer;
        for(int j=0;j<m;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='B' or ch == 'G')
            layer.push_back('B');
            else
            layer.push_back(ch);
        }
        ar.push_back(layer);
    }
    vector<char> v1=ar[0];
    vector<char> v2=ar[1];
    if(v1==v2)
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
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
    string s;
    cin>>s;
    int n = s.length();
    map<char, vector<int>> let_to_ind;
    for (int i = 0; i < n; ++i) {
        let_to_ind[s[i]].push_back(i);
    }
    // for(auto it : let_to_ind)
    // {
    //     cout<<it.first<<" :-\n";
    //     int size = it.second.size();
    //     for(int i = 0;i<size;i++)
    //     {
    //         cout<<it.second[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    int direction = (s[0]<s[n-1])?1:-1;
    vector<int> v;
    for(char c = s[0];c!=s[n-1]+direction;c+=direction)
    {
        for(auto zx : let_to_ind[c])
            v.push_back(zx);
    }
    int cost = 0;
    for(int i = 1;i<v.size();i++)
    {
        cost+=abs(s[v[i]] - s[v[i-1]]);
    }
    cout<<cost<<" "<<v.size()<<endl;
    for(auto zx : v)
    {
        cout<<zx+1<<' ';
    }
    cout<<endl;
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
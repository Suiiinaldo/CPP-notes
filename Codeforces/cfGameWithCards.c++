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
    int n,m;
    cin>>n;
    vector<int> al(n);
    for(int i=0;i<n;i++)
        cin>>al[i];
    cin>>m;
    vector<int> bo(m);
    for(int j=0;j<m;j++)
        cin>>bo[j];
    if(*max_element(all(bo))>*max_element(all(al)))
    cout<<"Bob\n";
    else
    cout<<"Alice\n";
    if(*max_element(all(al))>*max_element(all(bo)))
    cout<<"Alice\n";
    else
    cout<<"Bob\n";
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
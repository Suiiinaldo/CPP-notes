#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> v1;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(i>=1)
        {
            mini = min(mini,v[i]);
            maxi = max(maxi,v[i]);
        }
    }
    if(v[0]>mini)
    cout<<"Alice\n";
    else
    cout<<"Bob\n";

}
int32_t main()
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
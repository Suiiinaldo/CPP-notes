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
    vector<int> a(n);
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i];
    }
    sort(all(a));
    if(a[n-1]<=0)
    {
        cout<<a[n-1]*a[n-1]<<" "<<a[0]*a[0]<<endl;
    }
    else if(a[0] < 0 and a[n-1] > 0 )
    cout<<a[n-1]*a[0]<<" "<<max(a[n-1]*a[n-1],a[0]*a[0])<<endl;
    else
    cout<<a[0]*a[0]<<" "<<a[n-1]*a[n-1]<<endl;
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
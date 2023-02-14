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
    int count = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        count++;
    }
    vector<int> b = a;int f=0;
    for(int i=2;i<n-1;i++)
    {
        if(__gcd(a[i],a[i+1]) == 1)
        f=1;
    }
    sort(all(a),greater<int>());
    if(a!=b or (f == 1 and count!=n))
    cout<<"NO"<<endl;
    else
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
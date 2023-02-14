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
    vector<int> b(n);
    int count1 = 0,count2 =0;int acount1=0,acount0=0,bcount1=0,bcount0=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        count1++;
    }
    if(a == b)
    {
        cout<<0<<endl;
        return;
    }
    sort(all(a));
    sort(all(b));
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        count2++;
    }
    if(a == b)
    {
        cout<<1<<endl;
        return;
    }
    if(count1<=count2)
    cout<<count1<<endl;
    else
    cout<<count2+1<<endl;
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
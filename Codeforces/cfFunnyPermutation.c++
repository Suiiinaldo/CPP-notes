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
    vector<int> res(n);
    int k=n;
    for(int i=0;i<n;i++)
    {
        res[i] = k--;
    }
    if(n == 1 or n == 3)
    cout<<"-1\n";
    else if(n%2==0)
    {
        showvec(res);
    }
    else
    {
        int n = res.size();
        int mid = n/2;
        if(mid-1 == 1 or mid+1 ==n-2)
        swap(res[mid],res[n-1]);
        else
        swap(res[mid],res[mid-1]);
        showvec(res);
    }
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
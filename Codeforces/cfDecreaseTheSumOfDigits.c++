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
int sumOfDigits(int x)
{
    int sum = 0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
void solve()
{
    int n,s;
    cin>>n>>s;
    if(sumOfDigits(n)<=s)
    {
        cout<<"0\n";
        return;
    }
    int ans = 0;int extractDigit = 1;
    for(int i = 0;i<18;i++)
    {
        int digit = (n/extractDigit)%10;
        int x = extractDigit*((10-digit)%10);
        ans+=x;
        n+=x;
        if(sumOfDigits(n)<=s)
        {
            cout<<ans<<endl;
            break;
        }
        extractDigit*=10;
    }
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
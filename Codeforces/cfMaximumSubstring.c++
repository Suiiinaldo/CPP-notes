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
    string s;
    cin>>s;
    int ones = count(all(s),'1');
    int zeroes = count(all(s),'0');
    int first = ones*zeroes;
    int onesub = 0;
    int zerosub = 0;
    int c = 0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == '1' and s[i+1] == '1')
        c++;
        else
        {
            onesub=max(onesub,c+1);
            c=0;
        }
    }
    onesub = max(onesub,c+1);
    c = 0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == '0' and s[i+1] == '0')
        c++;
        else
        {
            zerosub=max(zerosub,c+1);
            // cout<<zerosub<<endl;
            c=0;
        }
    }
    zerosub = max(zerosub,c+1);
    int sec = onesub*onesub;
    int third = zerosub*zerosub;
    cout<<max(max(first,sec),third)<<endl;
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
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define int long long
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    cin>>ar[i];
    vector<int> br=ar;
    sort(all(br));
    if(ar == br)
    cout<<br[n-1]-br[0]<<endl;
    else
    {
        int mini=INT_MAX,maxp=-1;
        int maxi=INT_MIN,minp=-1;
        int diff1=INT_MIN;
        int diff2=ar[n-1]-ar[0];
        int diff3=INT_MIN;
        int diff4=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>maxi)
            {
                maxi=ar[i];
                maxp=i;
            }
            if(ar[i]<mini)
            {
                mini=ar[i];
                minp=i;
            }
            if(ar[i]> ar[i+1])
            {
                diff1=max(diff1,ar[i]-ar[i+1]);
            }
        }
        diff3=maxi-ar[0];
        diff4=ar[n-1]-mini;
        cout<<max(max(diff1,diff2),max(diff3,diff4))<<endl;
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
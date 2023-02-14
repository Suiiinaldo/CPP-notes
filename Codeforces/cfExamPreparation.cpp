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
    int d,dsum;
    cin>>d>>dsum;
    vector<int> v;
    int f=0;
    for(int i=0;i<d;i++)
    {
         int min,max;
        cin>>min>>max;
        if(max<=dsum)
        {
            v.push_back(min);
            dsum-=min;
        }
        else if(dsum>=min and dsum<=max)
        {
            v.push_back(dsum);
            dsum=0;
        }
    }
    if(dsum!=0)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(auto i=v.begin();i!=v.end();++i)
            cout<<*i<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // int t;
    // cin>>t;
    //while(t-->0)
    //{
        solve();
    //}
    return 0;
}
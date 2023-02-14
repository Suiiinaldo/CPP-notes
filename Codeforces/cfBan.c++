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
    string s;
    for(int i=0;i<n;i++)
    s+="BAN";
    vector<pair<int,int>> v;
    if(n==1)
    {
        cout<<"1\n1 2"<<endl;
        return;
    }
    else
    {
        int na = n/2;
        if( n & 1)
        na+=1;
        cout<<na<<endl;
        int ini = 2;
        int  last = 3*n;
        while(na--!=0)
        {
            cout<<ini<<" "<<last<<endl;
            ini+=3;
            last-=3;
        }
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
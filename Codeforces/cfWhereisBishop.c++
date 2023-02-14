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
    char v[8][8];
    int n=8;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<n;j++)
        cin>>v[i][j];
    }
    int x=0,y=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i-1][j-1]=='#' and v[i-1][j+1]=='#' and v[i+1][j-1]=='#' and v[i+1][j+1]=='#' and v[i][j]=='#')
            {
                x=i+1;y=j+1;
            }
        }
    }
    cout<<x<<" "<<y<<endl;
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
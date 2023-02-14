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
    int n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;
    int ar[n][m];
    int c=0;
    sx-=1;sy-=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(i-sx)+abs(j-sy) <= d)
            ar[i][j]= 0;
            else
            ar[i][j]=1;
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<ar[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++)
    {
        if(ar[i][0]==0)
        {
            for(int j=0;j<m;j++)
            {
                if(ar[0][j] == 0)
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    // cout<<abs(n-1)+abs(m-1)<<endl;
    for(int i=0;i<n;i++)
    {
        if(ar[i][m-1] == 0 )
        {
            for(int j=0;j<m;j++)
            {
                if(ar[n-1][j]==0)
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    cout<<abs(n-1)+abs(m-1)<<endl;
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
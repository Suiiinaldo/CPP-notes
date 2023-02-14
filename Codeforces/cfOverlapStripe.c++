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
    // string s;
    // cin>>s;
    cin.ignore();
    char mat[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>mat[i][j];
        }
    }
    int flag = 0;
    for(int i=0;i<8;i++)
    {
        int count = 0 ;
        for(int j=0;j<8;j++)
        {
            if(mat[i][j] == 'R')
            count++;
        }
        if(count == 8)
        {
            cout<<"R\n";
            return;
        }
    }
    cout<<"B\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        // cin.ignore();
        solve();
    }
    return 0;
}
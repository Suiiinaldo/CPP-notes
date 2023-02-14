#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<int,int>f;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        f[x]++;
    }
    int c=0;
    for(int i=0;i<f.size();i++)
    {
        if(f[i]>=3)
        {
            cout<<i<<endl;
            c=1;break;
        }
    }
    if(c==0)
    cout<<"-1"<<endl;
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
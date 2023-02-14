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
    if(n<=3)
    {
        for(int i =n;i>=1;i--)
        cout<<i<<" ";
        cout<<endl;
        return;
    }
    else if(n == 4)
    {
        cout<<"2 4 1 3\n";
        return;
    }
    int vis[n+1] = {0};
    vector<int> v;
    int mid = n/2;
    if(n & 1)
    mid +=1;
    int k=0;
    for(int i = 1;i<=n;i++)
    {
        if(!vis[i])
        {
            v.push_back(i);
            vis[i] = 1;
            if(i+mid<=n)
            {
                v.push_back(i+mid);
                vis[i+mid] = 1;
            }
        }
    }
    showvec(v);
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
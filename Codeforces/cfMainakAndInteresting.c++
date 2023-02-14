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
    int n,m;
    cin>>n>>m;
    if(m<n or (n%2==0 and m%2!=0))
    cout<<"NO\n";
    else
    {
        if(n%m==0)
        {
            cout<<"Yes\n";
            for(int i=0;i<n;i++)
            cout<<m/n<<" ";
            cout<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<"Yes\n";
                for(int i=0;i<n-2;i++)
                cout<<m/n<<" ";
                int remaining= m-((m/n)*(n-2));
                cout<<remaining/2<<" "<<remaining/2<<endl;
            }
            else
            {
                cout<<"Yes\n";
                int modi=m/n;
                int remaining = m-(modi)*(n-1);
                while(remaining < modi)
                {
                    modi--;
                }
                for(int i=0;i<n-1;i++)
                cout<<modi<<" ";
                cout<<remaining<<endl;
            }
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
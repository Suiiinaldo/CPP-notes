#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    rep(n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(all(b));
    if(a==b or n==1)
    cout<<"0\n";
    else if(a[n-1]==1 and n>1)
    cout<<"-1\n";
    else
    {
        int c=0;
        for(int i=n-2;i>=0;i--)
        {
            while(a[i]>=a[i+1] and a[i]!=0 )
            {
                c++;
                a[i]=a[i]/2;
            }
            if(a[i]==0 and i>0 || (a[i]==a[i+1]))
            {
                cout<<"-1"<<endl;return;
            }
        }
        cout<<c<<endl;
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
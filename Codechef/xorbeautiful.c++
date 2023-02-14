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
    ll ar[n];int o=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        o++;
        else if(ar[0]==0)
        z++;
    }
    ll k;
    cin>>k;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(abs(ar[j]-ar[i])==1)
                continue;
            else
                c++;

        }
        
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}
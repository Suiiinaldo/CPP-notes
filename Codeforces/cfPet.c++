#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    ll dogsleft=x-a;
    bool dogs=false,cats=false;
    if(dogsleft!=0)
    {
        if(dogsleft<0)
        dogs=true;
        else
        {
            if(dogsleft<=c)
            {
                c=c-dogsleft;
                dogs=true;
            }
            else
            dogs=false;
        }
    }
    else
    dogs=true;
    ll catsleft=y-b;
    if(catsleft<0 or catsleft>0)
    {
        if(catsleft<0)
        cats=true;
        else
        {
            if(catsleft<=c)
            {
                c=c-catsleft;
                cats=true;
            }
            else
            dogs=false;
        }
    }
    else
    cats=true;
    if(dogs and cats)
    cout<<"YES\n";
    else
    cout<<"NO\n";

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
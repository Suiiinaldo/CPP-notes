#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
bool check(vector<ll>v,int alpha,int sex)
{
        if(v[alpha]<sex)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        ll n,c=0;
        cin>>n;
        vector<ll> v(n);
        bool gama;
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                c++;gama=check(v,i-1,v[i+1]);
            }
        }
        if(c<=1 and gama==true)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
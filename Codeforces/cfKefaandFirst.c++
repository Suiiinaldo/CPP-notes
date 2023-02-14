#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int c=1,m=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]-v[i]>=0)
        c++;
        else
        {
            m=max(m,c);
            c=1;
        }
    }
    if(m==1)
    cout<<0<<endl;
    else
    cout<<max(m,c)<<endl;
    return 0;
}
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
    ll z;
    cin>>z;
    if(z>=1900)
    cout<<"Division 1\n";
    else if(z>=1600 and z<=1899)
    cout<<"Division 2\n";
    else if(z>=1600 and z<=1899)
    cout<<"Division 2\n";
    else if(z>=1400 and z<=1599)
    cout<<"Division 3\n";
    else 
    cout<<"Division 4\n";
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
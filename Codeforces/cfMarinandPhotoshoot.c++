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
    int n;
    cin>>n;
    string s;
    cin>>s;int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='0' and s[i+1]=='0')
            c+=2;
        else if(s[i]=='0' and s[i+2]=='0')
            c+=1;
    }
    cout<<c<<endl;
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
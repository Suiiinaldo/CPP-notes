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
    vector<int > v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int minus = count( all(v) , -1);
    int posi = count( all(v) , 1);
    if(abs(minus - posi ) > 2)
    cout<<"NO\n";
    else
    {
        if(minus%2!=0 and posi%2!=0)
        {
            if(abs(posi-minus)==0)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
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
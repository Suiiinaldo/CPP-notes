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
    cin>> n;
    vector<int> v(n);
    int mi = INT_MAX , ma=INT_MIN ;
    int x=1 , y=1;
    for (int i=0; i<n; i++)
    {
        cin>> v[i];
        if (v[i]<=mi)
        {
            mi = min(mi , v[i]);
            x = i + 1;
        }
        if (v[i]>=ma)
        {
            ma = max(mi , v[i]);
            y = i + 1;
        }
    }
    cout << x<<" "<<y<<endl;
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
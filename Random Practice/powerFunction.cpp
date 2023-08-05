//She ain't worth your time bro.
#include<bits/stdc++.h>

int power(int n,int m)
{
    if(m == 1)
    return n;
    return n*(power(n,m-1));
}
void solve()
{
    int n,m;
    cin>>n>>m;
    cout<<power(n,m)<<endl;
}
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}
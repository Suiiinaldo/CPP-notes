#include<bits/stdc++.h>
using namespace std;
int jumps(int ind,vector<int> &dp,vector<int> &v)
{
    if(ind == 0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jump2 = INT_MAX;
    int jump1 = jumps(ind-1,dp,v) + abs(v[ind] - v[ind-1]);
    if(ind>1)
        jump2 = jumps(ind-2,dp,v) + abs(v[ind] - v[ind-2]);
    return dp[ind] = min(jump1,jump2); 
}

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
        cin>>v[i];
    vector<int> dp(n,-1);
    cout<<jumps(n-1,dp,v);
}
int main()
{
    solve();
}
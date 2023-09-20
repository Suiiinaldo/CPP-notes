#include<bits/stdc++.h>
using namespace std;
int jumps(int ind,vector<int> &v,vector<int> &dp,int k)
{
    if(ind == 0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int mini = INT_MAX;
    for(int i = 1;i<=k;i++)
    {
        if(ind-i>=0)
        {
            int jump = jumps(ind-i,v,dp,k) + abs(v[ind] - v[ind - i]);
            mini = min(mini,jump);
        }
    }
    return dp[ind] = mini;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
        cin>>v[i];
    vector<int> dp(n+1,-1);
    cout<<jumps(n-1,v,dp,k)<<endl;
}
int main()
{
    solve();
}
#include<bits/stdc++.h>
using namespace std;

int climb(int n,vector<int> &dp)
{
    if(n <= 1)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n] = climb(n-1,dp) + climb(n-2,dp);
}
/*
TODO: this approach uses O(N) time complexity and that is why the program fails when
        constraint are n<= 1e18, To solve in that complexity we use techniques like
        Matrix Exponentiation.
*/
void solve()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    int ways = climb(n,dp);
    cout<<ways<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
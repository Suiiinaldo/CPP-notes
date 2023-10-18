#include<bits/stdc++.h>
using namespace std;
void f(int n,int amount,vector<int> &coins)
{
    vector<vector<int>> dp(n,vector<int>(amount+1,0));
    for(int i = 0;i<=amount;i++)
    {
        if(i % coins[0] == 0)
            dp[0][i] = i/coins[0];
    }
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<=amount;j++)
        {
            int notTake = dp[i-1][j];
            int take = INT_MAX;
            if(coins[i] <= j)
                take = 1 + dp[i][j - coins[i]];
            dp[i][j] = min(take,notTake);
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<=amount;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int n = 3;
    int am = 10;
    vector<int> coins = {1,3,5};
    f(n,am,coins);
}
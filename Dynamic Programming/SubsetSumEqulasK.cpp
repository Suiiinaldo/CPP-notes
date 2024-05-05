#include<bits/stdc++.h>
using namespace std;
//Memoization
// bool subsetEquals(vector<int> &v,int target,int ind,vector<vector<int>> &dp) 
// {
//     if(target == 0)
//         return true;
//     if(ind == 0)
//     {
//         return v[ind] == target;
//     }
//     if(dp[ind][target]!=-1)
//     {
//         return dp[ind][target];
//     }
//     bool not_take = subsetEquals(v,target,ind-1,dp);
//     bool take = false;
//     if(target >= v[ind])
//         take = subsetEquals(v,target - v[ind],ind-1,dp);
//     return dp[ind][target] = take | not_take;
// }
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i<n;i++)
        cin>>v[i];
    // vector<vector<int>> dp(n,vector<int>(k+1,-1));  //Array of Ind X Target
    // cout<<boolalpha<<subsetEquals(v,k,n-1,dp)<<endl; //Memoization

    // Tabulation
    vector<vector<bool>> dp(n,vector<bool>(k+1,false));  //Array of Ind X Target
    for(int i = 0;i<n;i++)
        dp[i][0] = true;
    if(v[0] <=k) dp[0][v[0]] = true;
    for(int ind = 1;ind<n;ind++)
    {
        for(int j = 1;j<=k;j++)
        {
            bool not_take = dp[ind-1][j];
            bool take = false;
            if(v[ind] <= j)
                take = dp[ind-1][j - v[ind]];
            dp[ind][j] = take | not_take;
        }
    }

    //Space Optimised
    // vector<bool> dp(k+1,0),cur(k+1,0);
    // dp[0] = true;
    // if(nums[0] <=k) dp[v[0]] = true;
    // for(int ind = 1;ind<n;ind++)
    // {
    //     for(int j = 1;j<=k;j++)
    //     {
    //         bool not_take = dp[j];
    //         bool take = false;
    //         if(v[ind] <= j)
    //             take = dp[j - v[ind]];
    //         cur[j] = take | not_take;
    //     }
    //     dp = cur;
    // }
    // cout<<boolalpha<<dp[k]<<endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=k;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
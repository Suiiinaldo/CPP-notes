#include<bits/stdc++.h>
using namespace std;
void knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
	for(int w = weight[0];w<=maxWeight;w++) 
		dp[0][w] = value[0];
	for(int ind = 1;ind<n;ind++)
	{
		for(int w = 0;w<=maxWeight;w++)
		{
			int notTake = dp[ind-1][w];
			int take = INT_MIN;
			if(weight[ind] <= w)
				take = value[ind] + dp[ind-1][w-weight[ind]];
			dp[ind][w] = max(take,notTake);
		}
	}
	for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=maxWeight;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n = 4;
    int maxWeight = 5;
    vector<int> weight = {1,2,4,5};
    vector<int> value = {5,4,8,6};
    knapsack(weight,value,n,maxWeight);
}
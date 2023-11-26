//She ain't worth your time bro.
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n)
{
    primeNumbers.assign(n+1,true);
    primeNumbers[0] = primeNumbers[1] = false;
    for(int i = 2;i*i<=n;i++)
    {
        if(primeNumbers[i])
        {
            for(int j = i*i;j <= n;j += i)
                primeNumbers[j] = false;
        }
    }
}
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// int f(int r,int c,vector<vector<int>> &grid,vector<vector<int>> &dp,int n)
// {
//     if(r == 0 and c == 0)
//         return 1;
//     if(r < 0 or c < 0 or r >= n or c >= n or grid[r][c] == '*')
//         return 0;
//     if(dp[r][c] != -1) return dp[r][c];
//     int left = f(r,c-1,grid,dp,n);
//     int up = f(r-1,c,grid,dp,n);
//     return dp[r][c] = left + up;
// }
void solve()
{
    int n;
    cin>>n;
    int mod = 1e9+7;
    vector<vector<char>> grid(n,vector<char>(n,'.'));
    for(int i = 0;i<n;i++)
        for(int j = 0;j<n;j++)
            cin>>grid[i][j];
    if(grid[0][0] == '*')
    {    
        cout<<"0\n";
        return;
    }
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<n;j++)
        {
            if(i == 0 and j == 0)
                dp[i][j] = 1;
            else if(grid[i][j] == '*') dp[i][j] = 0;
            else
            {
                int up = 0,left = 0;
                if(i>0) up = dp[i-1][j] % mod;
                if(j>0) left = dp[i][j-1] % mod;
                dp[i][j] = (up + left) % mod;
            }
        }
    }
    cout<<dp[n-1][n-1]<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t-->0)
    // {
        solve();
    // }
    return 0;
}
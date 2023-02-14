#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(n) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(n) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void bfs(int i,int j,vector<vector<char>> &grid,vector<vector<int>> &vis)
{
    vis[i][j] = 1;
    queue<pair<int,int>> q;
    q.push({i,j});
    int n = grid.size();
    int m = grid[0].size();
    int delr[]={-1,1,0,0};
    int delc[]={0,0,-1,1};
    while(!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int i = 0;i<4;i++)
        {
            int nrow = row + delr[i];
            int ncol = col + delc[i];
            if( nrow>= 0 and nrow<n and ncol>=0 and ncol<m
             and!vis[nrow][ncol] and grid[nrow][ncol] == '.')
            {
                vis[nrow][ncol] = 1;
                q.push({nrow,ncol});
            }
        }
    }
}
int numIslands(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    int count = 0 ;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(!vis[i][j] and grid[i][j] == '.')
            {
                bfs(i,j,grid,vis);
                count++;
            }
        }
    }
    return count;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid;
    for(int i=0;i<n;i++)
    {
        vector<char> layer(m);
        for(int j=0;j<m;j++)
        {
            cin>>layer[j];
        }
        grid.push_back(layer);
    }
    cout<<numIslands(grid)<<endl;
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
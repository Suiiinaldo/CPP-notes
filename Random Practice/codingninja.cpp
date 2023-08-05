#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> ankit(n+1,vector<int>(n+1,1e9));
    vector<vector<int>> ayush(n+1,vector<int>(n+1,1e9));
    for(int i = 0;i<m;i++)
    {
        int u,v,ankitDis,ayushDis;
        cin>>u>>v>>ankitDis>>ayushDis;
        ankit[u][v] = ankitDis;
        ayush[u][v] = ayushDis;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
          if (i == j) {
            ayush[i][j] = 0;
            ankit[i][j] = 0;
          }
        }
    }
    // cout<<"Ankit\n";
    for(int k = 1; k <= n;k++)
    {
        for(int i = 1; i <= n;i++)
        {
            for(int j = 1; j <= n;j++)
            {
                ayush[i][j] = min(ayush[i][j],ayush[i][k]+ayush[k][j]);
                ankit[i][j] = min(ankit[i][j],ankit[i][k]+ankit[k][j]);
            }
        }
    }
    int ans = 1e9;
    int x = -1;int y = -1;
    for(int i = 1;i<=n;i++)
    {
        for(int  j =1;j<=n;j++)
        {
            if(i == j or (i == j and i == 1e9))continue;
            if(ankit[i][j] <= ayush[i][j] and ( (ayush[i][j] - ankit[i][j]) < ans))
            {
                ans = min(ans,ayush[i][j] - ankit[i][j]);
                x = i;
                y = j;
            }
        }
    }
    cout<<ayush[x][y] <<" " << ankit[x][y]<<endl;
    cout<<x<<" "<<y<<" "<<ans<<endl;
}
//She ain't worth your time bro. 


/*-------------------------------ShortCuts-----------------------------------*/       
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define repi(n) for(int i=0;i<n;i++)
#define repj(n) for(int j=0;j<n;j++)
#define repk(n) for(int k=0;k<n;k++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define showset(s) for(auto i=s.begin();i!=s.end();++i) cout<<*i<<" ";cout<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
vector<bool> primeNumbers;
void SeiveOfEratosthenes(int n);
int gcd(int a, int b);

//x<<y is x*(2^y)
//x>>y is x/(2^y)

/*-------------------------------Let's Do it--------------------------------*/
int n,m;
int ShortestRoute(vector<vector<char>> &grid,int startX,int startY,int desX,int desY)
{
	vector<vector<int>> dis(n,vector<int>(m,1e9));
	queue<pair<int,pair<int,int>>> q;
	q.push({0,{startX,startY}});
	int delr[] = {-1,1,0,0};
	int delc[] = {0,0,-1,1};
    dis[startX][startY] = 0;
	while(!q.empty())
	{
		int row = q.front().second.first;
		int col = q.front().second.second;
		int dist = q.front().first;
		q.pop();
		for(int i = 0;i<4;i++)
		{
			int newr = row + delr[i];
			int newc = col + delc[i];
			if(newr < n and newr >= 0 and newc < m
				and newc >= 0 and grid[newr][newc] == '.')
			{
				if(newr == desX and newc == desY)
				{
					return dist + 1;
				}
				if(dist + 1 < dis[newr][newc])
				{
					dis[newr][newc] = dist + 1;
					q.push({dist + 1, {newr,newc}});
				}
			}
		}
	}
	if(dis[desX][desY] == 1e9)
		return -1;
	return dis[desX][desY];
}

void solve()
{
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char> (m,'#'));
    int startX = -1,startY = -1,desX = -1,desY = -1;
    repi(n)
    {
    	for(int j = 0;j<m;j++)
    	{
    		cin>>grid[i][j];
    		if(grid[i][j] == 'A')
    		{
    			startX = i;
    			startY = j;
    		}
    		else if(grid[i][j] == 'B')
    		{
    			desX = i;
    			desY = j;
    		}
    	}
    }
    // repi(n)
    // {
    //     repj(m)
    //         cout<<grid[i][j];
    //     cout<<endl;
    // }
    cout<<ShortestRoute(grid,startX,startY,desX,desY)<<endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t-->0)
    {
        solve();
    }
    return 0;
}


/*-----------------------------------WEAPONS------------------------------*/

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
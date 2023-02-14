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
void solve()
{
    int n;
    cin>>n;
    int maxi  = n*n;
    int mini = 1;
    int arr[n][n];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            arr[i][j]  = 0;
        }
    }
    int k = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(k%2)
            {
                arr[i][j] = mini++;k++;
            }
            else
            {
                arr[i][j] = maxi--;k++;
            }
        }
    }
    if(!(n%2))
    {
        for(int i = 0;i<n;i++)
        {
            if(i&1)
            reverse(arr[i],arr[i]+n);
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
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
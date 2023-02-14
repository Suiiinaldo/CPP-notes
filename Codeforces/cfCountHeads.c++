#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
#define int long long
using namespace std;
void counter(int &ans,vector<char>& v)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]=='L')
            ans+=i;
        else
            ans+=v.size()-i-1;
    }
}
void solve()
{
    int n;
    cin>>n;
    vector<char> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int c=0;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        if(n%2==0)
        {
            vector<char> z=v;int ans=0;
            if(i<n/2)
            {
                if(v[i]=='L')
                {
                    z[i]='R';
                    counter(ans,z);
                    res.push_back(ans);
                }
            }
            else
            {
                if(v[i]=='R')
                {
                    z[i]='L';
                    counter(ans,z);
                    res.push_back(ans);
                }
            }
        }
        else
        {
            vector<char> z=v;int ans=0;
            if(i<n/2)
            {
                if(v[i]=='L')
                {
                    z[i]='R';
                    counter(ans,z);
                    res.push_back(ans);
                }
            }
            else
            {
                if(v[i]=='R')
                {
                    z[i]='L';
                    counter(ans,z);
                    res.push_back(ans);
                }
            }
        }
    }
    sort(all(res));
    int anse=INT_MIN;
    vector<int> resfin;
    for(int i=1;i<n;i++)
    {
        anse=max(anse,res[i]);
        resfin.push_back(anse);
    }

    // int start=0,end=n-1;
    // for(int j=0;j<n;j++)
    // {
    //     int ans=0;int flag1=0,flag2=0;
    //     if(v[start]=='L' and start< n/2)
    //     {
    //         v[start]='R';
    //         start++;
    //         for(int i=0;i<n;i++)
    //         {
    //             if(v[i]=='L')
    //             {
    //                 ans+=i;
    //             }
    //             else
    //                 ans+=v.size()-i-1;
    //         }
    //         flag1=1;
    //     }
    //     else if(end>=n/2 and v[end]=='R')
    //     {
    //         v[end]='L';
    //         end--;
    //         for(int i=0;i<n;i++)
    //         {
    //             if(v[i]=='L')
    //             {
    //                 ans+=i;
    //             }
    //             else
    //                 ans+=v.size()-i-1;
    //         }
    //         flag2=1;
    //     }
    //     c=max(c,ans);
    //     res.push_back(c);
    // }
    // showvec(v);
    showvec(resfin);
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
#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define showmap(m) for(auto i=m.begin();i!=m.end();++i) cout<<i->first<<" "<<i->second<<endl;
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1\n";
    }
    else if(n==2)
    {
        cout<<"2\n";
    }
    else if(n==3)
    {
        cout<<"2 1 3\n";
    }
    else
    {
        vector<int> v;
        for(int i=n-2;i>0;i--)
        {
            v.push_back(i);
        }
        v.push_back(n-1);
        v.push_back(n);
        if(n & 1)
        {
            swap(v[n-4],v[n-5]);
        }
        showvec(v);
    }
}
int main()
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
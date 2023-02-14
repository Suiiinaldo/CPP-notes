#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define rep(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> v;
    rep(m)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(all(v));
    
    cout<<z<<endl;
    return 0;
}
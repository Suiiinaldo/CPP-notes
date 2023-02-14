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
        vector<pair<int,int>> powerA;
        vector<int> powerB(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            powerA.push_back({x,i});
        }
        for(int i=0;i<n;i++)
            cin>>powerB[i];
        sort(powerA.rbegin(),powerA.rend());
        int final=1;
        set<int> set;
        set.insert(powerB[powerA[0].second]);
        for(int i=1;i<n;i++)
        {
            if(powerB[powerA[i].second] > *set.rbegin())
            {
                final++;
                set.insert(powerB[powerA[i].second]);
            }
        }
        cout<<final<<endl;
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
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
void dfs(int node,vector<int> adj[],vector<int> &vis)
{
    vis[node] = 1;
    for(auto it : adj[node])
    {
        if(!vis[node])
        {
            dfs(it,adj,vis);
        }
    }
}
void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    stack<pair<char,int>> st;
    vector<int> adj[n];
    for(int i=0;i<n;i++)
    {
        if(s[i]==')')
        {
            if(st.top().first =='(')
            {
                adj[st.top().second].push_back(i);
                adj[i].push_back(st.top().second);
                st.pop();
            }
        }
        else
        st.push({s[i],i});
    }
    if(s[0] == '(' and s[n-1]==')')
    {
        adj[0].push_back(n-1);
        adj[n-1].push_back(0);
    }
    vector<int> vis(n,0);
    int start = 0;
    int count = 0;
    for(int i=0;i<vis.size();i++)
    {
        if(!vis[i])
        {
            dfs(start,adj,vis);
            count++;
        }
    }
    cout<<count<<endl;
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
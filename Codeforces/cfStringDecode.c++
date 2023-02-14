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
    char ar[]= {'0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    deque<char> q;
    cin>>s;
    int i = s.length()-1;
    while(i>=0)
    {
        int z=0;
        if(s[i]=='0')
        {
            z=(((char)s[i-2]-48)*10)+(s[i-1]-'0');
            // cout<<z<<endl;
            q.push_front(ar[z]);
            i-=3;
        }
        else
        {
            z=s[i]-'0';
            // cout<<z<<endl;
            q.push_front(ar[z]);
            i-=1;
        }
    }
    while(!q.empty())
    {
        char c= q.front();
        cout<<c;
        q.pop_front();
    }
    cout<<endl;
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
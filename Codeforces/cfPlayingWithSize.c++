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
    string s,d;
    cin>>s>>d;
    int count=0,count2=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'X')
            count++;
    }
    for(int i=0;i<d.length();i++)
    {
        if(d[i] == 'X')
            count2++;
    }
    char se = s[s.length()-1];
    char de = d[d.length()-1];
    if(se > de)
        cout<<"<"<<endl;
    else if(se == de)
    {
        if(count>count2  and se == 'S')
        {
            cout<<"<\n";
        }
        else if(count>count2 and se =='L')
        {
            cout<<">\n";
        }
        else if(count<count2 and se == 'S')
        cout<<">\n";
        else if(count<count2 and de == 'L')
        {
            cout<<"<\n";
        }
        else if(count == count2)
        cout<<"=\n";
    }
    else
    cout<<">\n";
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
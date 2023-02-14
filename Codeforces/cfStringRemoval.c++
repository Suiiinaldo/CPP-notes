#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define rep(m) for(int i=0;i<n;i++)
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string bob,alice;
    map<char,int>m;int k=1;
    for(char i='a';i<='z';i++)
        m.insert({i,k++});
    int n=s.length();int al=0,bo=0;
    if(n & 1)
    {
        int front=0,back=0;
        alice=s;
        if(s[0]>s[n-1])
        {
            bob=s[n-1];
            alice=s.substr(0,n-1);
        }
        else
        {
            bob=s[0];
            alice=s.substr(1,n);
        }
        for(int i=0;i<alice.length();i++)
            al+=m.find(alice[i])->second;
        bo+=m.find(bob[0])->second;
        if(bo>al)
        cout<<"Bob "<<bo-al<<endl;
        else
        cout<<"Alice "<<al-bo<<endl;
    }
    else
    {
        alice=s;
        for(int i=0;i<alice.length();i++)
            al+=m.find(alice[i])->second;
        cout<<"Alice "<<al<<endl;
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
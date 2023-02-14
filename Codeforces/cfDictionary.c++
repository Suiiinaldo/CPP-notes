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
    string s;string d="";
    cin>>s;int k=0;int f=1;
    for(char i='a';i<='z';i++)
    {
        for(char j='a';j<='z';j++)
        {
            if(i==j)
            continue;
            else
            {
                k++;
                d+=i;
                d+=j;
                if(d==s)
                {
                    cout<<k<<endl;
                    return;
                }
                else
                d="";
            }
        }
    }
    if(f==1)
    cout<<"NO\n";

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
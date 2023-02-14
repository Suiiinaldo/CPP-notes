#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
vector<string> split(string s,int n)
{
    vector<string> resfin;string d="";s+="W";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='W')
        d=d+s[i];
        else
        {
            resfin.push_back(d);
            d="";
        }
    }
    return resfin;
}
void solve()
{
    int n;
    cin>>n;cin.ignore();
    string s;
    cin>>s;int c=0;
    vector<string> sr=split(s,n);
    for(int i=0;i<sr.size();i++)
    {
        if(sr[i]=="")
        continue;
        int r=count(all(sr[i]),'R');
        int b=count(all(sr[i]),'B');
        if(sr[i].length()==1 or r==sr[i].length() or b==sr[i].length())
        {
            cout<<"NO\n";c=1;break;
        }
        else
        {
            c++;
        }
    }
    if(c==sr.size())
    cout<<"YES\n";
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
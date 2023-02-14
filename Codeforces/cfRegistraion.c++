#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n;
    cin>>n;cin.ignore();
    string s;
    set<string> set;int i=0;string d="";
    cin>>s;
    cout<<"OK\n";
    set.insert(s);d=s;
    for(int i=1;i<n;i++)
    {
        cin>>s;
        if(set.find(s)==set.end())
        {
            set.insert(s);
            cout<<"OK"<<endl;
        }
        else
        {
            char ch=d[d.length()-1];
            if(ch>='1' and ch <='9')
            {
                i=ch-'0';
                i++;
                d[d.length()-1]=char(i+48);
            }
            else
            d+='1';
            set.insert(d);
            cout<<d<<endl;
        }
    }
    return 0;
}
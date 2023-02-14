#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define show(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
int main()
{
    map<string,int> m;
    int t,marks,type;string name;
    cin>>t;
    while(t-->0)
    {
        cin>>type;
        cin>>name;
        if(type==1)
        {
            cin>>marks;
            m[name]+=marks;
        }
        else if(type==2)
        {
            m.erase(name);
        }
        else
        cout<<m[name]<<endl;
    }
    return 0;
}
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
    cin>>n;
    string s=to_string(n);
    if(s[0]!='-')
    cout<<s<<endl;
    else
    {
        int sz=s.length();
        int z=count(all(s),'0');
            string d=s;
            if(sz==3 and z>0 )
            {
                cout<<"0\n";
            }
            else if(s[sz-1]>=s[sz-2])
            {
                for(int i=0;i<sz-1;i++)
                cout<<s[i];
                cout<<endl;
            }
            else if(s[sz-2]>s[sz-1])
            {
                for(int i=0;i<sz-2;i++)
                cout<<s[i];cout<<s[sz-1];cout<<endl;
            }
            else
            cout<<s<<endl;
    }
    return 0;
}
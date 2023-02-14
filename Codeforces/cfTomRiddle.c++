#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i];cout<<endl
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        auto it=find(all(v),name);
        if(it==v.end())
        {
            cout<<"No\n";
            v[i]=name;
        }
        else
        {
            cout<<"Yes"<<endl;
        }        
    }
    return 0;
}
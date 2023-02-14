#include<bits/stdc++.h>
#define upper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define lower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define all(s) s.begin(),s.end()
#define showvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl
#define ll long long
using namespace std;
void solve(int n)
{
    vector<int > v;
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(v[i]%2!=0)
        odd.push_back(i);
        else
        even.push_back(i);
    }
    if(odd.size()==n or even.size()==n)
    cout<<"Yes\n";
    else
    {
        int c=0;
        for(int i=0;i<odd.size()-1;i++)
        {
            if(odd[i+1]-odd[i]==1)
            {
                c=1;
                break;
            }
        }
        int d=0;
        for(int i=0;i<even.size()-1;i++)
        {
            if(even[i+1]-even[i]==1)
            {
                d=1;
                break;
            }
        }
        if(c==1 or d==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
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
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}
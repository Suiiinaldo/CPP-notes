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
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        ll ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        int c=0;bool kylie=true;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                c++;
                swap(ar[i+1],ar[i]);
                if(i>0)
                kylie=(ar[i-1]>ar[i])?false:true;
                if(c>1 or kylie==false)
                break;
            }
        }
        if(c>1 or kylie==false)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}
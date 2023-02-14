#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,c=0;
    cin>>n;
    ll ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    ll zxc=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]<ar[i+1])
        {
            c+=1;
        }
        else
        {
            zxc=max(zxc,c);
            c=0;
        }
    }
    cout<<zxc<<endl;
    return 0;
}
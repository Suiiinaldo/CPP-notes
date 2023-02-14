#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
     {
         ll n;
         cin>>n;
         ll k=(ll)log2(n);
         ll cxz=k;
         ll sum=0;
         while(cxz>0 )
         {
            ll c=n-pow(2,cxz);
            sum+=c;
            n=pow(2,cxz)-1;
            cxz--;
         }
         cout<<sum<<endl;
     }
}

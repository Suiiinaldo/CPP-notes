#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        ll a,b;
        cin>>a>>b;int c=0,zxc;
        while(a<b)
        {
            ll sec;
            if(a%2==0)
                sec=a+2;
            else
                sec=a+3;
                zxc=__gcd(a,sec);
            if(zxc>1 && sec<b)
            {
                cout<<a<<" "<<sec;
                c=1;break;
            }
            b/=2;
            
        }
        if(c==0)
        cout<<"-1"<<endl;
    }
}
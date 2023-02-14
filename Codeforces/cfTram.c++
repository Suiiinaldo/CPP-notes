#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,a=0,b=0,s=0,x=0;
    cin>>t;
    while(t-->0)
    {
        cin>>a>>b;
        s=s+b-a;
        if(s>=x)
        x=s;
    }
    cout<<x;
    return 0;
}
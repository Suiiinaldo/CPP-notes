#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t-->0)
    {
        int p,q;
        cin>>p>>q;
        if((q-p)>=2)
        c++;
    }
    cout<<c;
}
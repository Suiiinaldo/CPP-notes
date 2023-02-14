#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main()
{
    int n,total=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int o=count(all(v),1);
    int tw=count(all(v),2);
    int th=count(all(v),3);
    int f=count(all(v),4);
    total+=f;
    while(o>0 and th>0)
    {
        total+=1;
        o-=1;th-=1;
    }
    total+=th;
    if(tw>=2)
    {
        total+=tw/2;
        tw=tw%2;
    }
    while(o>1 and tw>0)
    {
        total+=1;
        o-=2;tw--;
        cout<<o<<" "<<tw;
    }
    total+=tw;
    if(o%4==0)
    {
        total+=o/4;
    }
    else if(o%2==0)
    {
        total+=o/2;
    }
    else
    total+=o%4;
    cout<<total<<endl;
    return 0;
}
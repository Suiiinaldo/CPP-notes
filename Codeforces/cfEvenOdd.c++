#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n,k=0,c;
    cin>>n>>c;
    int64_t ar[n];
    for(int64_t i=1;i<=n;i++)
    {
        if(i%2!=0)
        ar[k++]=i;
    }
    for(int64_t i=1;i<=n;i++)
    {
        if(i%2==0)
        ar[k++]=i;
    }
    cout<<ar[c-1]<<endl;
    return 0;
}
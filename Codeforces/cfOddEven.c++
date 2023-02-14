#include<iostream>
using namespace std;
int main()
{
    int n,k,m=0;
    cin>>n;
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        ar[m]=i;
        else if(i%2==0)
        ar[m +(n-1)]=i;
        m=m+1;
    }
    for(int i=0;i<m;i++)
    cout<<ar[i]<<endl;
    return 0;
}
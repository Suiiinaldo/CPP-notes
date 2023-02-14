#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int c=0;
    for(int i=0;i<n;i++)
    if(ar[i]>h)
    c+=2;
    else
    c+=1;
    cout<<c;
    return 0;
}
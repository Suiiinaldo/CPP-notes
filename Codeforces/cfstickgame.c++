#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=min(n,m);
    if(n==1 ||m==1)
    cout<<"Akshat"<<endl;
    else if(x%2==1)
    cout<<"Akshat"<<endl;
    else
    cout<<"Malvika"<<endl;
}
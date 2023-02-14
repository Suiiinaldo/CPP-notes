#include<iostream>
#define ll long long
#define all(s) s.begin(),s.end()
using namespace std;
int main()
{
    ll x,y,z;
    cin>>x>>y;
    z=x-y;
    try
    {
        if(z!=0)
        cout<<"Result : "<<x/z<<endl;
        else
        throw z;
    }
    catch(ll p)
    {
        cout<<"Divide by Zero Excpetion Caught"<<endl;
    }
}
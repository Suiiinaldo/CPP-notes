#include<iostream>
#define ll long long
using namespace std;
void solve(ll a,ll b)
{
    ll z =b-a;
    if(z==0)
    throw z;
    else
    cout<< a/z <<endl;
}
int main()
{
    ll a, b, c;
    cout<<"Enter the Numbers: "<<endl;
    cin>>a>>b;
    try
    {
        solve(a,b);
    }
    catch(ll p)
    {
        cout<<"Divide by Zero Exception Caught"<<endl;
    }
}
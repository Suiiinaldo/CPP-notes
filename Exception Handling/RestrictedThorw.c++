#include<iostream>
#define ll long long
using namespace std;
void solve(int a,int b)throw(double)
{
    int z =b-a;
    if(z==0)
    throw z;
    else
    cout<< a/z <<endl;
}
int main()
{
    int a, b, c;
    cout<<"Enter the Numbers: "<<endl;
    cin>>a>>b;
    try
    {
        solve(a,b);
    }
    catch(int p)
    {
        cout<<"Divide by Zero Exception Caught"<<endl;
    }
    catch(double p)
    {
        cout<<"Divide by Zero Exception Caught\n";
    }
}
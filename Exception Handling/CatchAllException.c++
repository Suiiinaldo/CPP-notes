#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=b-a;
    try
    {
        if(c==0)
        throw "gjg";
        else
        cout<<a/c<<endl;
    }
    catch(...)
    {
        cout<<"Divide by Zero Exception Caught"<<endl;
    }
}
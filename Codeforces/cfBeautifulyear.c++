#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n<9001)
    {
        n++;
        int a=n%10,b=(n/10)%10,c=(n/100)%10,d=(n/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }
    cout<<n;
}
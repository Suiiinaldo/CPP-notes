#include<iostream>
using namespace std;
string ReverseString(string a,int i = 0,string d="")
{
    if(i == a.length())
    return d;
    d=a[i]+d;
    return ReverseString(a,i+1,d);
}
int main()
{
    cout<<ReverseString("Hello")<<endl;
    return 0;
}
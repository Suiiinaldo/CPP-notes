#include<iostream>
using namespace std;
int main()
{
    char str[30]="A String";
    char *p;
    p=&str[0];
    cout<<str[0]<<" "<<p<<" "<<str[3]<<endl;
    p=p+2;
    cout<<p<<" "<<*(p+2)<<" "<<*(p+5)<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = true;
    while(n--)
    {
        cout<<flag<<endl;
        flag = !flag;
    }
}
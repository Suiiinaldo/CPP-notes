#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String\n";
    cin>>s;
    cout<<"Reversed String is\n";
    for(int i=s.size();i>=0;i--)
    cout<<s[i];
    cout<<endl;
}
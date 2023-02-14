#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    int n,a=0,d=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        a++;
        else
        d++;
    }
    if(a>d)
    cout<<"Anton"<<endl;
    else if(a<d)
    cout<<"Danik"<<endl;
    else
    cout<<"Friendship"<<endl;
    return 0;
}
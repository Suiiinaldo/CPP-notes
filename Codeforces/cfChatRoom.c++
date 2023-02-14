#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,d="hello";
    cin>>s;int j=0,pass=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==d[j])
        {
        j++;
        pass++;
        if(pass==5)
        break;}
    }
    if(pass==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
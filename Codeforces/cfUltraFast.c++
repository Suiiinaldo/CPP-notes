#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,d,res="";
    cin>>s;
    cin>>d;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=d[i])
        res+="1";
        else
        res+="0";
    }
    cout<<res;
    return 0;
}
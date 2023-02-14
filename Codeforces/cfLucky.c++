#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;int c=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='7'||s[i]=='4')
        c++;
    }
    if(c==4 ||c==7||c==47||c==74)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
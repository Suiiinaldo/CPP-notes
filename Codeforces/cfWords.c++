#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;int c=0;
    cin>>s;
    for(char i='a';i<='z';i++)
    {
        for(int j=0;j<=s.size();j++)
        {
        if(s[j]==i)
        c+=1;
        }
    }
    if(c<(s.size()-c))
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }


    return 0;
}
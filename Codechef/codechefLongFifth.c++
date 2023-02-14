#include<bits/std++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t-->0)
    {
        string s;
        cin>>s;
        int c=0,a=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] !=s[0] && s[i]!=s[s.size()-1])
            c++;
            else
            c=0;
            a=max(a,c);
        }
        if(a==0)
        cout<<"-1"<<endl;
        else
        cout<<a<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        string s,door="",key="";
        cin>>s;
        if(s[0]=='R' || s[0]=='G' ||s[0]=='B' || s[5]=='r' || s[5]=='g' || s[5]=='b')
        {
            cout<<"NO"<<endl;
            continue;
        }
        int n=s.size();int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='R')
            {
                for(int j=i;j>=0;j--)
                {
                    if(s[j]=='r')
                    {c+=1;break;}
                }
                if(c>=1)
                continue;
            }
            else if(s[i]=='B')
            {
                for(int j=i;j>=0;j--)
                {
                    if(s[j]=='b')
                    {c+=1;break;}
                }
                if(c>=1)
                continue;
            }
            else if(s[i]=='G')
            {
                for(int j=i;j>=0;j--)
                {
                    if(s[j]=='g')
                    {c+=1;break;}
                }
                if(c>=1)
                continue;
            } 
        }
        if(c==3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
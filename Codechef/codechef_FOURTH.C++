#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=0,zero=0;
        cin>>n;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        string s;
        cin>>s;char ch=s[0];int c=0,cs=0,f=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==ch)
            c++;
            if(s[i]=='1')
            one++;
            else
            zero++;
        }
        if(c==s.size()-1)
        cout<<"1"<<endl;
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=s[i+1])
                cs++;
                else
                f=1;
            }
            if(f==1)
            cout<<cs<<endl;
            else
            cout<<cs+1<<endl;

        }
    }
    return 0;
}
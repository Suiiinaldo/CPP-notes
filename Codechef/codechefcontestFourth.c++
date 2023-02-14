#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string s;int c0=0,c1=0,n;
        cin>>n;
        cin>>s;
        if(n%2!=0)
        cout<<"YES"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                c0++;
                else
                c1++;
            }
            if(c0==c1)
            cout<<"YES"<<endl;
            else if(c0==n||c1==n)
            cout<<"YES"<<endl;
            else if(c0%2==0 && c1%2==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

    }
}
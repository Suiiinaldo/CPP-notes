#include<bits/stdc++.h>
using namespace std;
int main()
{
    int space,n;
    cin>>n;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(i<n/2)
        {
            for(space = 0;space<n/2-i - 1;space++)
            {
                cout<<" ";
            }
            int stars  = 2*i+1;
            count = max(stars,count);
            while(stars-->0)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            for(space = 0;space<i-n/2+1;space++)
            {
                cout<<" ";
            }
            int stars = count - 2;
            count-=2;
            while(stars-->0)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
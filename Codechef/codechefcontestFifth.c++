#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int ar[n];
        int max=INT_MIN,c=0,op=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>max)
                max=ar[i];
            if(ar[i]==max)
            c++;
        }
        if(n==2)
        {
            cout<<"1"<<endl;continue;
        }
        else if(c==n)
        {
            cout<<"0"<<endl;continue;
        }
        for(int i=0;i<n-1;i++)
        {
            if(ar[i]+ar[i+1]==max)
            {
                ar[i]=max;
                op+=1;
                ar[i+1]=-9999;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}
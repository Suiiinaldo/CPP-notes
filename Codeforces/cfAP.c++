#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int ar[3];
        for(int i=0;i<3;i++)
        cin>>ar[i];
        if((ar[2]+ar[0])/2==ar[1])
        cout<<"YES"<<endl;
        else
        {
            if(ar[2]<ar[1])
            {
                int m=(ar[1]*2)-ar[2];
                if(m%ar[0]==0)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
            else if(ar[1]<ar[2])
            {
                int m=(ar[0]+ar[2])/2;
                if(m%ar[1]==0)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }       
        }
    }
    
    return 0;
}
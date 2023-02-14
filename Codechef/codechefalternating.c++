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
        int ar[n];int se=0,so=0;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            se+=ar[i];
            else
            so+=ar[i];
        }
        cout<<max(se,so)<<endl;
    }
}
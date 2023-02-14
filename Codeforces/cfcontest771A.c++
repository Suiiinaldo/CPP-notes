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
        int ar[n];int br[n];int pos=-1,swap=-1;
        for(int i=0;i<n;i++)
        {cin>>ar[i];br[i]=ar[i];}
        sort(ar,ar+n);
        for(int i=0;i<n;i++)
        {
            if(br[i]!=ar[i])
            {
                swap=i;
                for(int j=i;j<n;j++)
                {
                    if(br[j]==ar[i])
                    {
                        pos=j;
                        break;
                    }
                }
                if(pos>-1)
                break;
            }
        }
        int t;
        int as=br[swap];
        br[swap]=br[pos];
        br[pos]=as;
        for(int i=0;i<n;i++)
        cout<<br[i]<<" ";
        cout<<endl;

    }
}
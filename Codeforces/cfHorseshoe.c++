#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
    long long ar[5];
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
    }
    int s=3;
    sort(ar,ar+4);
        for(int j=0;j<3;j++)
        {
            if(ar[j]!=ar[j+1])
            s--;
        }
    cout<<s<<endl;
}
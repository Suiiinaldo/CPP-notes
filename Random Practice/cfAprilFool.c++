#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ratings[]={1200,1400,1600,1900,2100,2300,2400,2600,3000};
    int r;
    cin>>r;
    for(int i=0;i<9;i++)
    {
        if(r<ratings[i])
        {
            cout<<ratings[i]<<endl;
            break;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string start="I hate ",d="that I love ",z="that I hate ",end="it";
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        start+=d;
        else
        start+=n;
    }
    start+=end;
    cout<<start<<endl;
}
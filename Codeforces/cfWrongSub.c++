#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k;
    cin>>n>>k;
    while(k-->0)
    {
        int r=n%10;
        if(r>0)
        n-=1;
        else
        n/=10;
    }
    cout<<n<<endl;
}
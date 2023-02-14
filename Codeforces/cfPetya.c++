#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,c=0;
    cin>>n;
    int arr[]={4,7,44,47,74,77,444,474,477,744,747,777};
    for(int i=0;i<12;i++)
    if(n%arr[i]==0)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}